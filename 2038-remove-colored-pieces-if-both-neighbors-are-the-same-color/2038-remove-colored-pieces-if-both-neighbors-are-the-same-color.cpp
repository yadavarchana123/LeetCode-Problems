class Solution {
public:
    bool winnerOfGame(string colors) {
     if(colors.size() < 3) 
         return false;
      int a=0, b=0;
    for(int i=1; i<colors.size()-1; i++)
    {
        if(colors[i]=='A' and colors[i-1]=='A' and colors[i+1]=='A')
            a++;
        if(colors[i]=='B' and colors[i-1]=='B' and colors[i+1]=='B')
           b++; 
    }
    return a > b;
    }
};