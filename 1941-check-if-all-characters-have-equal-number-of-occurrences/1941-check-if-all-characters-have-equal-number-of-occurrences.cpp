class Solution {
public:
    bool areOccurrencesEqual(string s) {
        
        int arr[26]={0};
        for(auto x: s)
        {
            arr[x-'a']++;
        }
        int x=arr[s[0]-'a'];
        for(int i=0; i<s.length(); i++)
        {
            if(arr[s[i]-'a']!=x)
                return false;
        }
        return true;
    }
};