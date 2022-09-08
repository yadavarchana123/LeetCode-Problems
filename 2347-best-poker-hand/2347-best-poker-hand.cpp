class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
       unordered_map<char,int>mp1; 
       unordered_map<int,int>mp2;
       int max1 = 0, max2 = 0;
       for(int i=0; i<ranks.size(); i++)
       {
           mp1[suits[i]]++;
           mp2[ranks[i]]++;
           max1 = max(max1,mp1[suits[i]]);
           max2 = max(max2,mp2[ranks[i]]);
       }
        if( max1 == 5)
              return "Flush";
        if(max2 >= 3)
              return "Three of a Kind";
        if(max2 >= 2)
              return "Pair";
        return "High Card";
    }
};