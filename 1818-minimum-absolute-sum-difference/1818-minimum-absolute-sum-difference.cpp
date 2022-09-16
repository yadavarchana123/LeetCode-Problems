class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& n1, vector<int>& n2) {
       long n = size(n1), original = 0, maxDecrement = 0;
	   set<int> s(begin(n1), end(n1));   
	   for(int i = 0; i < n; i++){
		long diff = abs(n1[i] - n2[i]); 
		original += diff;
	    auto it = s.lower_bound(n2[i]);
		if(it != begin(s))
            maxDecrement = max(maxDecrement, diff - abs(*prev(it) - n2[i]));
		if(it != end(s)) 
            maxDecrement = max(maxDecrement, diff - abs(*it - n2[i]));            
	}
	return (original - maxDecrement) % 1000000007; 
    }
};