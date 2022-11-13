class Solution
{
    public:
        string reverseWords(string s)
        {
            stringstream ss(s);
            stack<string> st;
            string res = "", word;
            while (ss >> word)
            {
                st.push(word);
            }
            while (!st.empty())
            {
                res += st.top();
                st.pop();
                res += " ";
            }
            res.pop_back();
            return res;
        }
};