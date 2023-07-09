class Solution {
public:
    int integerReplacement(long long n) {
        int cnt  = 0;
        while(n > 1){
            if(n%2){
               if((n+1) % 4 == 0 and n-1 != 2)
                   n++;
                else
                    n--;
            }
            else{
                n /= 2;
               
            }
             cnt++;
            
        }
        return cnt;
    }
};