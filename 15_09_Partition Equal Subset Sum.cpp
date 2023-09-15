class Solution {
public:

    bool subsetSumHelper(int i, int sum, int arr[], int n, vector<vector<int>> &dp) {
        if (sum == 0) return true;

        if (i >= n || sum < 0) return false;

        if (dp[i][sum] != -1) {
            return dp[i][sum];
        }

        bool pick = subsetSumHelper(i + 1, sum - arr[i], arr, n, dp);
        bool notPick = subsetSumHelper(i + 1, sum, arr, n, dp);

        return dp[i][sum] = pick || notPick;
    }

    int equalPartition(int N, int arr[])
    {
        int totalSum = 0;
        for (int i = 0; i < N; i++) {
            totalSum += arr[i];
        }

        if (totalSum % 2 != 0) return false;

        int targetSum = totalSum / 2;
        vector<vector<int>> dp(N, vector<int>(targetSum + 1, -1));

        return subsetSumHelper(0, targetSum, arr, N, dp);

    }
};