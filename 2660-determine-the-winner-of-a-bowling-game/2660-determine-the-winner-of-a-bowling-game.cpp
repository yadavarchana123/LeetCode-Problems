class Solution {
public:
    int helper(vector<int>& v){
        int score = 0,idx=-1; bool flag = false;
        for(int i=0; i<v.size(); i++){
           
            if(idx != -1 and (i-idx >2)){
                flag = false;
                idx = -1;
            }
            if(flag){
                score += (2*v[i]);
            }
            else{
                score += v[i];
            }
             if(v[i] == 10){
                flag = true;
                idx = i;
            }
            
        }
        return score;
    }
    int isWinner(vector<int>& player1, vector<int>& player2) {
       
        if(helper(player1) == helper(player2)){
            return 0;
        }
        return (helper(player1)>helper(player2)?1:2);
    }
};