class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>line(n+2,0), answer(n);
        for(int i = 0; i<bookings.size(); i++)
        {
            int s = bookings[i][0], e = bookings[i][1], x = bookings[i][2];
            line[s] += x;
            line[e+1] -= x;
        }
        for(int i=1; i<=n; i++)
        {
            line[i] += line[i-1];
            answer[i-1]=line[i];
        }
       
        return answer;
    }
};