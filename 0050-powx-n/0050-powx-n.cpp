class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0){
            return 1.0;
        }
        double temp = myPow(x,abs(n/2));
        if(n%2 == 0){
            if(n > 0){
                return (temp*temp);
            }
            else{
                return (1/(temp*temp));
            }
        }
        else{
            if(n > 0){
                return (x*temp*temp);
            }
            else{
                return (1/(x*temp*temp));
            }
        }
    }
};