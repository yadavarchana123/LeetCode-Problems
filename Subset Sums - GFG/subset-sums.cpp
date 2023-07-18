//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int>ans;
    void helper(int s, vector<int> arr, int n, vector<int>& temp){
        if( s >= n){
            int sum = 0;
            for(auto x: temp){
                sum += x;
            }
            ans.push_back(sum);
            return;
        }
        temp.push_back(arr[s]);
        helper(s+1,arr,n,temp);
        temp.pop_back();
        helper(s+1,arr,n,temp);
    }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        // Write Your Code here
        vector<int>temp;
        helper(0,arr,n, temp);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends