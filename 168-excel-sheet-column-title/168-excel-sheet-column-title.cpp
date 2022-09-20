class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "";
        while(columnNumber > 0)
        {
            columnNumber--;
            int r = columnNumber%26;
            res += 'A'+r;
            columnNumber /= 26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};