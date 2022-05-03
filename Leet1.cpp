/*
Problem Statement: https://leetcode.com/problems/shortest-unsorted-continuous-subarray/
Time: O(n log n)
Author: Archana Yadav , github.com/yadavarchana123
*/

int findUnsortedSubarray(vector<int>& nums) {
        vector<int>v( nums);
        sort(v.begin(), v.end());
        int n=nums.size(),i=0, j=n-1;
        while(i<n and nums[i]==v[i])
            i++;
        while(j>i and nums[j]==v[j])
            j--;
        return j-i+1;
    }
    
    // Better Approach
    //Time: O(n)
    int findUnsortedSubarray(vector<int>& nums) {
        int i=0, j=nums.size()-1,start=0,end=-1;
        int cur_max=INT_MAX;
        int cur_min=INT_MIN;
        while(j>=0)
        {
            if(nums[i] >= cur_min)
                cur_min=nums[i];
            else
                end=i;
            if(nums[j] <= cur_max)
                cur_max=nums[j];
            else
                start=j;
            i++;
            j--;
        }
        return end-start+1;
    }
