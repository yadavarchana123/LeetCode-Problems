class Solution
{
    public:
        string maxValue(string n, int x)
        {
            bool flag = true, enter = false;
            if (n[0] == '-')
                flag = false;
            string ans = "";
            for (int i = 0; i < n.size(); i++)
            {
                if (flag and!enter and n[i] - '0' < x)
                {
                    ans += to_string(x);
                    enter = true;
                }
                else if (!flag and!enter and n[i] - '0' > x)
                {
                    ans += to_string(x);
                    enter = true;
                }
                ans += n[i];
            }
            if(ans.size()==n.size())
                ans += to_string(x);
            return ans;
        }
};