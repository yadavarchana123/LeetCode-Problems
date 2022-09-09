class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.size() < 8)
            return false;
        int lower = 0, upper = 0, digit = 0, special = 0, adj = 1;
        for(int i=0; i<password.size(); i++)
        {
            if(islower(password[i]))
                lower = 1;
            if(isupper(password[i]))
                upper = 1;
            if(isdigit(password[i]))
                digit = 1;
            if(password[i] >32 and password[i] < 47 || password[i]> 58 and password[i] <=64 || password[i]>91 and password[i]<96)
                special = 1;
            if(i and password[i]==password[i-1])
                adj = 0;
        }
        return (lower and upper and digit and special and adj);
    }
};