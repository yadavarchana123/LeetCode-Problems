class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
      vector<int>seq;
      for(int i=0; i<nums.size(); i++)
      {
          while(seq.size() and seq.back() > nums[i] and seq.size()-1+nums.size()-i >= k)
              seq.pop_back();
          if(seq.size() < k)
              seq.push_back(nums[i]);
      }
        return seq;
    }
};