class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int len = 0,cnt = 0 ;
        for(int i=0; i<k; i++)
        {
            if(blocks[i]=='W')
                cnt++;
        }
        len = cnt;
        for(int i=k; i<blocks.size(); i++)
        {
           if(blocks[i-k]=='W')
               cnt--;
           if(blocks[i]=='W')
                cnt++; 
            len = min(len, cnt);
            
        }
        return len;
    }
};