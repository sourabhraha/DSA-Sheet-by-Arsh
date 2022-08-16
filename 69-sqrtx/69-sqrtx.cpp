class Solution {
public:
    /*
    
        x = 8
        st = 1, en = 8;
        mid = 9 / 2 = 4
        4*4 = 16 > x  en = 3
        mid = 4 / 2 = 2
        2*2 = 4 < x st = 3
        mid = 6 / 2 = 3
        3*3 = 9 > x en = 2;
        
        
    
    
    
    */
    
    
    int mySqrt(int x) {
        
        if(x == 0 || x == 1)
            return x;
        
        long long  st = 1;
        long long  en = x;
 
        long long mid;
        while(st <= en)
        {
            mid = st + (en - st) / 2;
            if(mid*mid == x)
                return mid;
            else if(mid* mid > x)
                en = mid-1;
            else
                st = mid+1;
        }
        return st-1;
    }
};