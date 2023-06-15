class Solution {
public:
    bool isFascinating(int n) {
        bool one = false, two = false ,  three = false, four = false,  five = false, six = false, seven = false, eight = false, nine = false;
        string s = to_string(n);
        s += to_string(2*n);
        s += to_string(3*n);
        if(s.length() != 9) return false;
        for(auto x : s) {
            
            switch(x){
                    
                case '0':
                 return false;
                 break;
                    
                case '1':
                    one = true;
                    break;
                    
                case '2':
                    two =true;
                    break;
                    
                case '3':
                    three = true;
                    break;
                    
                case '4':
                    four = true;
                    break;
                    
               case '5':
                    five = true;
                    break;
                    
               case '6':
                    six = true;
                    break;
                    
              case '7':
                    seven = true;
                    break;

              case '8':
                    eight = true;
                    break;

              case '9':
                    nine = true;
                    break;     
            }
            
        }
        
        return (one and two and three and four and five and six and seven and eight and nine);
    }
};