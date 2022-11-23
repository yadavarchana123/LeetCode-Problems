class Solution
{
    public:
        string reformat(string s)
        {
            string digit = "", str = "", res = "";
            for (int i = 0; i < s.size(); i++)
            {
                if (isdigit(s[i]))
                    digit += s[i];
                else str += s[i];
            }
            if (digit.size() < s.size() / 2 or str.size() < s.size() / 2) return "";
            bool f;
            if (digit.size() > str.size()) f = true;
            else f = false;
            for (int i = 0, j = 0; i < min(digit.size(), str.size()) or j < min(digit.size(), str.size());)
            {
                if (f)
                    res += digit[i++], f = !f;
                else
                    res += str[j++], f = !f;
            }
            if (digit.size() > str.size()) res += digit.back();
            else if (digit.size() < str.size()) res += str.back();
            return res;
        }
};