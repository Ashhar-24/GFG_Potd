class Solution {
public:
    string colName (long long int n)
    {
        // your code here
        string ans = "";
        while (n > 0) {

            // taking n-1 in place of n bcoz when we convert it back to characters it will be
            // one character ahead of what we want.
            ans += ('A' + (n - 1) % 26);
            n = (n - 1) / 26;
        }

        reverse(ans.begin(), ans.end());
        return ans;

    }
};