// https://leetcode.com/problems/sum-of-square-numbers/
// Using Two pointers

bool judgeSquareSum(int c) {
        long long i=0, j=sqrt(c);
        if(c<0)
            return false;
        while(i<=j)
        {
          long long n = i*i + j*j;
            if(n < c)
                i++;
            else if( n> c)
                j--;
            else
                return true;
        }
        return false;
    }
