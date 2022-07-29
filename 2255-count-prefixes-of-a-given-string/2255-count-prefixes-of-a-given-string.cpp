class Solution {
public:

    
    bool isPre(string pre, string s){
        
        for(int i=0; i<pre.length(); i++)
        {
            if(pre[i] != s[i]) return false;
        }
        return true;
        
    }
    
    int countPrefixes(vector<string>& words, string s) {
        
        int ans = 0;
        
        for(int i=0; i<words.size(); i++)
        {
            if(isPre(words[i], s))
                    ans++;
        }
        return ans;
    }
};