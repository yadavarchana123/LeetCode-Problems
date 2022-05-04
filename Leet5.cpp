// https://leetcode.com/problems/intersection-of-two-arrays-ii/


vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        unordered_map<int,int>mp;
        for(auto x: nums1)
        {
            mp[x]++;
        }
        for(auto x: nums2)
        {
            if(mp[x])
            {
            v.push_back(x);
            mp[x]--;
            }
        }
        return v;
    }

// Another Approach

vector<int> intersect(vector<int>& a, vector<int>& b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    a.erase(set_intersection(a.begin(), a.end(), b.begin(), b.end(), a.begin()), a.end());
    return a;
  
  // Using two pointers
  
  vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n1 = (int)nums1.size(), n2 = (int)nums2.size();
        int i1 = 0, i2 = 0;
        vector<int> res;
        while(i1 < n1 && i2 < n2){
            if(nums1[i1] == nums2[i2]) {
                res.push_back(nums1[i1]);
                i1++;
                i2++;
            }
            else if(nums1[i1] > nums2[i2]){
                i2++;
            }
            else{
                i1++;
            }
        }
        return res;
    }
