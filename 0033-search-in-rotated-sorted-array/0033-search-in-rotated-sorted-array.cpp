class Solution {
public:
    int findPivot(vector<int>& nums){
        int l = 0, h = nums.size()-1;
        while(l < h){
            int m = (h+l)/2;
            if(nums[m] > nums[h])
                l = m+1;
            else 
                h = m;
        }
        return l;
    }
    int search(vector<int>& nums, int l, int h, int t){
        while(l <= h){
        int m = (l+h)/2;
        if(nums[m] == t){
            return m;
        }
        else if(nums[m] < t)
            l = m+1;
        else
            h = m-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivot = findPivot(nums);
        
        if(target >= nums[pivot] and target<= nums[nums.size()-1]){
            return search(nums,pivot, nums.size()-1, target);
        }
        else{
            return search(nums,0, pivot, target);
        }
    }
};