class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        for(int i=0; i<s.size(); i++)
        {
            int parity = (s[i]-'0')%2;
            for(int j=i+1; j<s.size(); j++)
            {
                if(s[j] > s[i] and parity == (s[j]-'0')%2)
                    swap(s[i],s[j]);
            }
        }
        num = stoi(s);
        return num;
    }
};