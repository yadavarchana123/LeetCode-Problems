class Solution {
public:
    string reverseWords(string s) {
         
        stringstream ss(s);
        string word,res="";
        while(ss >> word)
        {
            reverse(word.begin(), word.end());
            res+=word;
            res+=" ";
        }
        res.erase(remove(res.end()-1, res.end(), ' '), res.end());
        return res;
    }
};