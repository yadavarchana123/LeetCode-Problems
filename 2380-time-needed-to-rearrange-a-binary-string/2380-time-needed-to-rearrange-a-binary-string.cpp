class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
      
        int count = 0;
       while(true)
       {
           bool swaped = false;  vector<pair<int,int>>v;
           for(int i=1; i<s.size(); i++)
           {
               if(s[i-1]=='0' and s[i]=='1')
               {
                   v.push_back({i-1,i});
                   swaped = true;
               }
           }
           if(!swaped)
               break;
           count++;
           for(auto x : v)
           {
             swap(s[x.first],s[x.second]);  
           }
          
       }
        return count;
    }
};