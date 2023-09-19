class Solution
{
public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        int count = 0, setbit = 0;
        while (n > 0) {
            int bit = n % 2;
            count++;
            if (bit == 1) {
                setbit = count;
                break;
            }
            n /= 2;
        }

        return setbit;
    }
};