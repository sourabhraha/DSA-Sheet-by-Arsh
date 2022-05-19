class Solution {
public:
    
    int nextNum(int num)
    {

        int res = 0;
        while(num > 0)
        {
            int rem = num%10;
            res += rem * rem;
            num /= 10;
        }
        return res;
    }
    
    bool isHappy(int n) {
        
        int slow = n;
        int fast = nextNum(n);
        
        while(fast != 1 && slow != fast)
        {
            slow =  nextNum(slow);
            fast =  nextNum( nextNum(fast));
        }
        
        return fast == 1;
    }
};