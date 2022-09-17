class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
       int type1 = 0, type2 = 0;
       for(auto x : students){
           x == 0 ? type1++ :type2++;
           
       }
       for(auto x : sandwiches){
         if(x == 0) {
             if(type1 > 0)
             type1--;
             else return type2;
         }
         else{
             if(type2 > 0)
             type2--;
             else return type1;
         }
       }
       return 0;
    }
};