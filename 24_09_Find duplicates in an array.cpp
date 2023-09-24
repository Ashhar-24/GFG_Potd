class Solution {
public:
    vector<int> duplicates(int arr[], int n) {

        vector<int>ans;

        // as elements are present in the array from 0 to n-1, therefore we declare a freq array
        // with all its element as 0
        int freq[n] = {0};

        //taking freq of each element into the array
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }

        for (int i = 0; i < n; i++) {
            if (freq[i] > 1) {
                ans.push_back(i);
            }
        }

        if (ans.empty() == 1) {
            ans.push_back(-1);
        }

        return ans;
    }
};

// test case: 2,3,1,2,3