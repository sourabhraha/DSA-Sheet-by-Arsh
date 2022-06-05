class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        int i = s.length()-1, j = t.length()-1;
        
        int skipA = 0, skipB = 0;
        
        while(i>= 0 || j>= 0)
        {

            while(i>=0)
            {
                if(s[i] == '#')  {skipA++; i--;}
                else if(skipA > 0){ skipA--; i--;}
                else break;
            }
            
           while(j>=0)
            {
                if(t[j] == '#')  {skipB++; j--;}
                else if(skipB > 0){ skipB--; j--;}
                else break;
            }
            
            if((i>=0 && j>=0) && s[i] != t[j])
                return false;
        
            if((i>=0) != (j>=0))
                return false;
            
            i--; j--;
        }
        return true;   
    }
};