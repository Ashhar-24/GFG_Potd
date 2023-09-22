class Solution
{
public:
    vector<int> find(int arr[], int n, int x)
    {

        vector<int> ans;
        bool check = binary_search(arr, arr + n, x);
        if (check == 0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }

        else
        {
            int fo = lower_bound(arr, arr + n, x) - arr;
            int lo = upper_bound(arr, arr + n, x) - arr - 1; // -1 because upper_bound returns the iterator of next greatest element

            ans.push_back(fo);
            ans.push_back(lo);
        }

        return ans;
    }
};