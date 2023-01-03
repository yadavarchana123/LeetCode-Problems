class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
       int r = strs.size(), c = strs[0].size(), cnt = 0;
       for(int i=0; i<c; i++)
       {
           bool f = false;
           for(int j=1; j<r; j++)
           {
             if(strs[j][i] < strs[j-1][i])
             {
                 f = true;
                 break;
             }
           }
           if(f)
               cnt++;
       }
       return cnt;
    }
};