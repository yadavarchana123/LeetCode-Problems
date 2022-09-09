class Solution {
public:
    int count(long long n, vector<int>& potions,long long success)
    {
        int i =0, j = potions.size()-1;
        while(i <= j)
        {
            int mid = (i+j)/2;
            long long mul = n*potions[mid];
            if(mul >= success)
             j = mid-1;
            else
              i = mid+1;
        }
        return potions.size()-j-1;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        vector<int>ans(n);
        sort(potions.begin(),potions.end());
        for(int i=0; i<n; i++)
        {
            ans[i] = count(spells[i],potions,success);
        }
        return ans;
    }
};