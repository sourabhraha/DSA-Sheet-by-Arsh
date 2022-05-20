class Solution {
public:
    bool isPowerOfTwo(int n) {
       int x = n;
     
       if(n == 1)
           return true;
       if(n <= 0)
           return false;
        
       while(x>0)
       {
         int rem = x%2;
         if(rem>0 && x != 1)
             return false;
         x /= 2;
       }
      return true;
    }
};