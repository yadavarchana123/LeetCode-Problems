class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
     // we can have no more than 45 boxes because max value of highlimit is 10^5 (99,999 = 9 + 9 + 9 + 9 + 9).   
        
        int count[46] = {};
        for(int i = lowLimit; i<= highLimit; i++)
        {
            int sum = 0 , n = i;
            while(n)
            {
                sum += n%10;
                n /= 10;
            }
            count[sum]++;
        }
        return *max_element(count,count+46);
    }
};