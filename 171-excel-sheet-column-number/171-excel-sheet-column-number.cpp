class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int result = 0;
        
        for(char ch:columnTitle)
        {
            int rem = ch - 'A' + 1;
            result = result * 26 + rem;
        }
        
        return result;
    }
};