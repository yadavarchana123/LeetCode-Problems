class Solution {
public:
    string removeTrailingZeros(string num) {
        int i = num.size()-1;
        while( i>= 0){
            if(num[i] == '0')
            {
                num.pop_back();
                i--;
            }
            else
                break;
        }
        return num;
    }
};