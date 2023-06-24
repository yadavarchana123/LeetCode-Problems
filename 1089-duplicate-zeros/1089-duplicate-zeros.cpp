class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
       int zero = 0;
        for(int i = 0;i<arr.size();i++){
            if(arr[i] == 0) zero++;
        }
        int len = arr.size() + zero;
        for(int i = arr.size() - 1, j = len - 1;i>=0 && j>=0;i--,j--){
            if(arr[i] != 0){
                if(j<arr.size()) arr[j] = arr[i];
            }else{
                if(j<arr.size()) arr[j] = arr[i];
                j--;
                if(j<arr.size()) arr[j] = arr[i];//copy twice when hit '0'
            }
        }
    }
};