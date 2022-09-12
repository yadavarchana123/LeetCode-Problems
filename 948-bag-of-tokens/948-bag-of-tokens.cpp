class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size() < 1) return 0;
        sort(tokens.begin(), tokens.end());
        if(power < tokens[0] || power == 0)
            return 0;
        int i=0, j = tokens.size()-1, score = 0;
        while(i <= j)
        {
           if(power >= tokens[i])
           {
            power -= tokens[i++];
            score++ ;
           }
           else if(j-i > 1)
           {
             power += tokens[j--];
             score-- ;
           }
           else
                break;
        }
        return score;
    }
};