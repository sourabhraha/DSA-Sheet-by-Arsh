class Solution {
public:
    
    
    string removeWhiteSpace(string str)
    {
        string removed;
      for(int i=0; i<str.length();  ){
       
          if(str[i] == ' '){
            if(i==0 || i==str.length()-1){
                i++;
                continue;
            }
            while(str[i+1] == ' ')
                i++;
          }
          removed += str[i++];
      }
        
      if(removed[0] == ' ')
      {
          removed.erase(0, 1);
      }
        
      if(removed.back() == ' '){
          removed.erase(removed.size()-1, 1);
      }
    
     return removed;
    }
    
    string reverse(string s)
    {
        int i=0, j = s.length()-1;
        
        while(i < j)
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        
        return s;
    }
    
    
    
    string helper(string s, int n)
    {
        string ans;
        string temp;
        for(int i=n; i>=0; i--)
        {
            if(s[i] == ' ')
            {
               ans += reverse(temp);
               ans += ' ';
               temp = "";
               i--;
            }
            
            temp += s[i];
        }
        ans += reverse(temp);
        
        return ans;
    }
    
    
    
    string reverseWords(string s) {
        
        string removed = removeWhiteSpace(s);
        
        string rev = helper(removed, removed.length()-1);
        
        return rev;
    }
};