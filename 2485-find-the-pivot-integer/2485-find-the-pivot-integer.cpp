class Solution
{
    public:
        int pivotInteger(int n)
        {
            int sum = (n *(n + 1)) / 2, temp = 0;
            for (int i = 1; i <= n; i++)
            {

                temp += i;
                if (sum == temp) return i;
                sum -= i;
            }
            return -1;
        }
};