class Solution {
public:
    string changeInBase(int base, int n)
    {
        string num = "";
        while( n )
        {
            int r = n % base;
            n /= base;
            num += to_string(r);
        }
        return num;
    }
    bool polindrom(int base, int n)
    {
        string num = changeInBase(base, n);
        string s = num;
        reverse(num.begin(),num.end());
        return s==num;
    }
    bool isStrictlyPalindromic(int n) {
        
        for(int i=2; i<=n-2; i++)
        {
            if(!polindrom(i,n))
                return false;
        }
        return true;
    }
};