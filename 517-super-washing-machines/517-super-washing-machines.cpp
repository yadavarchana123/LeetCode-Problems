class Solution {
public:
    int findMinMoves(vector<int>& machines) {
       int n = machines.size(), move =0, cnt =0;
       int sum = accumulate(machines.begin(),machines.end(),0);
       if(sum % n) return -1;
       int part = sum / n;
       for(auto x : machines){
         cnt += x - part;
         move = max({move, abs(cnt), x - part});
       }
       return move;
    }
};