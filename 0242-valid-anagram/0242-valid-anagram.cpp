class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        for(auto x : s){
            arr[x-'a']++;
        }
        for(auto x : t){
            if(!arr[x-'a'])
                return false;
            arr[x-'a']--;
        }
        for(int i=0; i<26; i++){
            if(arr[i])
                return false;
        }
        return true;
    }
};