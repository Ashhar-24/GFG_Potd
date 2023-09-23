class Solution
{
public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n)
    {

        if (n == 1)
            return 1;
        // else if(n==2) return -1;
        else
        {
            long long sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += a[i];
            }

            long long sumr = 0, suml = 0;

            // for finding the sum we start from i=1 index and keep checking the sum of elements to its right and sum of elements to its left.
            for (int i = 1; i < n - 1; i++)
            {
                suml += a[i - 1];
                sumr = sum - suml - a[i];
                if (suml == sumr)
                    return i + 1;
            }
        }
        return -1;
    }
};