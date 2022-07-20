class Solution {
public:
    /*
            MCMXCIV
    
        ans = 5
        ans = 5 - 1 = 4
        ans = 100 + 4 = 104
        ans = 104 - 10 = 94
        ans = 1000 + 94 = 1094
        ans = 1094 - 100 = 994
        ans = 994 + 1000 = 1994
    
    
    */
    
    
    
    int romanToInt(string s) {
        if(s.empty()) return 0;
        
        map<char, int>mp{{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},
                        {'D', 500},{'M', 1000}};
        
        int size = s.length();
        
        int ans = mp[s.back()];
        
        for(int i=size-2; i>=0; i--)
        {
            cout<<s[i]<<" ";
            if(mp[s[i]] < mp[s[i+1]])
                ans -= mp[s[i]];
            else
                ans += mp[s[i]];
        }   
            
        return ans;
        
    }
};