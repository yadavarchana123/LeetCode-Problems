class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        string word = ""; vector<string> ans;
        int i =0;
        for(auto x : words){
            string word = "";
            for(auto y : x){
                if(y == separator){
                    if(word.size()){
                        ans.push_back(word);
                        word = "";
                    }
                }
                else if(y != separator){
                    word += y;
                }
            }
            if(word.size()){
            ans.push_back(word);       
            }
        }
        return ans;
    }
};