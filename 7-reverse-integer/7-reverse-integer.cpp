class Solution {
public:
    int reverse(int x) {
     
        int rev = 0, copy = abs(x);
        int sign = x > 0 ? 1 : -1;
        while(copy > 0)
        {

            if(INT_MAX / 10 < rev || INT_MAX -copy%10 < rev)
                return 0;
            rev = rev * 10 + copy % 10;
            copy /= 10;
        }
        return rev*sign;
        
    }
};