class Solution
{
    public:
        vector<int> numsSameConsecDiff(int n, int k)
        {
            vector<int> initial = { 1,
                2,
                3,
                4,
                5,
                6,
                7,
                8,
                9
            };
            for (int i = 2; i <= n; i++)
            {
                vector<int> temp;
                for (auto x: initial)
                {
                    int y = x % 10;
                    if (y + k < 10)
                    {
                        temp.push_back(x *10 + y + k);
                    }
                    if (k > 0 and y - k >= 0)
                    {
                        temp.push_back(x *10 + y - k);
                    }
                }
                initial = temp;
            }
            return initial;
        }
};