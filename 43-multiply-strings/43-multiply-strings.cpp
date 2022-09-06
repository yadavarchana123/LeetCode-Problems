class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0")
            return "0";
        int n = num1.size(), m=num2.size();
        vector<int>v(n+m,0);
        for(int i=n-1; i>=0; i--)
        {
            for(int j=m-1; j>=0; j--)
            {
                v[i+j+1] += (num1[i]-'0')*(num2[j]-'0');
                v[i+j] += v[i+j+1]/10;
                v[i+j+1] = v[i+j+1] % 10;
            }
        }
        int i=0; string ans = "";
        while(i<v.size() and v[i]==0)
            i++;
        while(i <v.size())
        {
            ans += v[i]+'0';
            i++;
        }
        return ans;
    }
};