class Solution {
public:
    int romanToDecimal(string &str) {
        // i. any char can't be present more than thrice
        // ii. if the symbol that represents a no. is smaller than the symbol present after it, the
        //      first no. will be taken as negative.
        // iii. We use unordered map to store the symbol (as key) and its value (as value).

        unordered_map<char, int>mp = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        // taking sum as last character
        int ans = mp[str.back()];

        for (int i = 0; i < str.length() - 1; i++) {
            if (mp[str[i]] < mp[str[i + 1]]) {
                ans -= mp[str[i]];
            }
            else {
                ans += mp[str[i]];
            }
        }

        return ans;
    }

};