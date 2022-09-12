class Solution {
public:
    int countPoints(string rings) {
    unordered_map<char,vector<char>>mp;
        int count = 0;
        for(int i=1; i<rings.size(); i++)
        {
            mp[rings[i]].push_back(rings[i-1]);
        }
        for(auto x : mp)
        {
            if(x.second.size()>= 3)
            {   
                bool r=false, g = false, b = false;
                for(auto y : x.second)
                {
                    if(y == 'R')
                        r = true;
                    if(y == 'G')
                        g = true;
                    if(y == 'B')
                        b = true;
                }
                if(r and g and b)
                    count++;
            }
        }
        return count;
    }
};