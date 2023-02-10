class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       vector<int>v;
        int i=0,j=n;
        bool f=true;
        for(i=0;i<2*n and j<2*n; )
        {
            if(f)
            {
                v.push_back(nums[i]);
                i++;
                 f=false;
            }
            else
            {
                v.push_back(nums[j]);
                j++;
                f=true;
            }
            
        }
        return v;
    }
};