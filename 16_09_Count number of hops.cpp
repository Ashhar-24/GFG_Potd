class Solution
{
public:
    //Function to count the number of ways in which frog can reach the top.
    const int mod = 1e9 + 7;
    long long countWays(int n)
    {
        vector<int>v(n + 1);
        v[0] = v[1] = 1;
        v[2] = 2;
        for (int i = 3; i <= n; i++) {
            v[i] = ((v[i - 1] % mod + v[i - 2] % mod) % mod + v[i - 3] % mod) % mod;
        }

        return v[n];

    }
};

/*
    The problem revolves around a pattern that v[i]= v[i-1] + v[i-2] + v[i-3]
    Can be done using dp with both the approaches top-down as well as bottom up.

*/