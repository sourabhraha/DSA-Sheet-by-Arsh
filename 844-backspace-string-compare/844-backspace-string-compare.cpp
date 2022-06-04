class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char>s1, s2;
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '#')
            {
                if(i == 0  || s1.empty())
                    continue;
                else
                     s1.pop();
            }
            else
                s1.push(s[i]);
        }
        
     for(int i=0; i<t.length(); i++)
        {
            if(t[i] == '#')
            {
                if(i == 0 || s2.empty())
                    continue;
                else
                     s2.pop();
            }
            else
                s2.push(t[i]);
        }
        
        return (s1 == s2) ? 1 : 0;
    }
};