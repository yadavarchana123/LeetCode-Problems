class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
       long long ans = 0;
       for(int pen = 0; pen*cost1 <= total; pen++)
       {
           ans +=(total - pen*cost1)/cost2 + 1;
       }
        return ans;
    }
};