// class Solution {
// public:
//     bool isValid(string s) {
//         string st;
//         map<char,char>mp;
//         mp['('] = ')';
//         mp['{'] = '}';
//         mp['['] = ']';
//         st.push_back(s[0]);
//         for (int i = 1; i < s.size(); i++) {
//             if(mp[st.back()] == s[i])
//                 st.pop_back();
//             else
//                 st.push_back(s[i]);
//         }
//         return st.size() ? 0 : 1;
//     }
// };

class Solution {
public:
    bool isValid(string s) {
    
        int size = s.length();
        
        // if(s[0] == ')' || s[0] == '}' || s[0] == ']')
        //     return false;
        
        stack<char>st;
        
        for(int i=0; i<size; i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[' )
                st.push(s[i]);
            else
               {
                    if(st.empty())
                        return false;
                    if(s[i] == ')' && st.top() == '(')
                    {
                        st.pop();
                      
                    }
                
                   else if(s[i] == '}' && st.top() == '{')
                    {
                        st.pop();
                       
                    }
                
                  else if(s[i] == ']' && st.top() == '[')
                    {
                        st.pop();
                       
                    }
                  else
                      st.push(s[i]);
               }
        }
               
        if(st.empty())
               return true;
        else
            return false;
    }
    
    
};