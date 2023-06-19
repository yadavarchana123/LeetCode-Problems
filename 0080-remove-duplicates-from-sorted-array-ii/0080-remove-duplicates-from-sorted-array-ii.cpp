class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n=a.size(),j=-1;
     for(int i=0;i<n;i++)
     {
         if(j>0&&a[i]==a[j]&&a[j]==a[j-1])
             continue;
         a[++j]=a[i];
     }
        return j+1;
         
    }
};