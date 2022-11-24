class Solution
{
    public:
        int hardestWorker(int n, vector<vector < int>> &logs)
        {
            int id = INT_MAX, mx = INT_MIN, dif, prev = 0;
            for (int i = 0; i < logs.size(); i++)
            {
                dif = logs[i][1] - prev;
                prev = logs[i][1];
                if (dif >= mx)
                {
                    if ((dif == mx) and id > logs[i][0])

                        id = logs[i][0];

                    else if (dif > mx) id = logs[i][0];
                    mx = dif;
                }
            }
            return id;
        }
};