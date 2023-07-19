class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& inv) {
        // Case 1:-
// ------------------   -----------------
// |   Interval 1   |   |   Interval 2  |
// ------------------   -----------------

//Case 2:-
// ------------------
// |   Interval 1   |
// ------------------
//            ------------------
//            |    Interval 2  |
//            ------------------

//Case 3:-
//  --------------------
//  |    Interval 1    |
//  --------------------
//     --------------
//     | Interval 2 |
       sort(inv.begin(),inv.end());
        int n= inv.size(), s=0, l=1, cnt=0;
        while( l< n)
        {
            // case 1
            
           if(inv[s][1] <= inv[l][0])
           {
               s = l;
               l++;
           }
            // case 2
            
            else if(inv[s][1] <= inv[l][1])
            {
                cnt++;
                 l++;
            }
            // case 3
            
            else if(inv[s][1] > inv[l][1])
            {
                cnt++;
                s=l;
                l++;
            }
        }
        return cnt;
    }
};