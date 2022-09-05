class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closest = nums[0]+nums[1]+nums[2];
        for(int i=0; i<nums.size()-1; i++)
        {
            int j=i+1, k = nums.size()-1;
            while( j< k)
            {
                int s = nums[i]+nums[j]+nums[k];
                if(s == target)
                    return s;
                if(abs(target-s) <= abs(target-closest))
                 closest = s;
                if(s < target)
                    j++;
                else
                    k--;
            }
        }
        return closest;
    }
};