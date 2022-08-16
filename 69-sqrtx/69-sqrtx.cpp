class Solution {
public:
    int mySqrt(int x) {
        
        if(x == 0 || x == 1)
            return x;
        
        long long  st = 1;
        long long  res = 1;
 
        
        while(res <= x)
        {
           st++;
           res = st*st;
        }
         return st-1;
    }
};