class Solution {
public:
    
    bool isPal(string s, int n)
    {
        int i=0, j = n;
        while(i < j)
        {
            if(s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    
    
    bool isPalindrome(string s) {
      
        string rev;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                rev += tolower(s[i]);
            }
            
            else if(s[i] >= 'a' && s[i] <= 'z')
            {
                rev += s[i];
            }
            
            else if(isdigit(s[i]))
            {
                rev += s[i];
            }
            
        }
        
        if(rev.length() == 0) return true;
        
        return isPal(rev, rev.length()-1);
    }
};