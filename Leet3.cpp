/*
Problem Statement: https://leetcode.com/problems/check-if-n-and-its-double-exist/
Hash Table Solution
Time Complexity: O(N)
Space Complexity: O(N)
Author: Archana Yadav , github.com/yadavarchana123
*/

bool checkIfExist(vector<int>& arr) {
        unordered_set<int>s;
        for(auto x: arr)
        {
        if(s.find(x*2)!= s.end() or x%2==0 and s.find(x/2)!= s.end())
                return true;
            s.insert(x);
        }
        return false;
    }
    
 // Binary Search Soln
// Time O(N.logN)
// Space O(1)

class Solution {
public:
    bool binarySearch (vector<int> &arr, int l, int r, int target)
    {
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (arr[m] == target)
                return true;
            else if (arr[m] > target)
                r = m - 1;
            else
                l = m + 1;
        }
        return false;
    }
    
    bool checkIfExist(vector<int>& arr) 
    {
        sort(arr.begin(), arr.end());
        for (int pointer_one = 0; pointer_one < arr.size(); pointer_one++) {
            if ((arr[pointer_one] % 2 == 0) && arr[pointer_one] < 0) {
                if (binarySearch(arr, pointer_one + 1, arr.size() - 1, arr[pointer_one] / 2))
                    return true; 
            }
            else {
                if (binarySearch(arr, pointer_one + 1, arr.size() - 1, 2 * arr[pointer_one]))
                    return true;
            }
        }
        return false;
    }
};
