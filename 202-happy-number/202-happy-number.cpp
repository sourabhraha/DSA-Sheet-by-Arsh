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
        
        map<int, int>mp;
        int next = n;
        while(true)
        {
            
            next = nextNum(next);
            if(next == 1)
                return true;
            if(mp[next] == 1)
                return false;
            mp[next] = 1;
        }
        
        
    }
};