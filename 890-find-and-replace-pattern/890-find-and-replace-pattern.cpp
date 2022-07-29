class Solution {
public:
    
    string permu(string s)
    {
        string ans;
        map<char, int>mp;
        for(int i=0; i<s.length(); i++)
        {
            if(!mp[s[i]]){
                    ans += to_string(i+1);
                    mp[s[i]] = i+1;
            }
            else
            {
                ans += to_string(mp[s[i]]);
            }
        }
        return ans;
    }
    
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
     
        string pat;
        
        map<char, int>mp;
        for(int i=0; i<pattern.length(); i++)
        {
            if(!mp[pattern[i]]){
                    pat += to_string(i+1);
                    mp[pattern[i]] = i+1;
            }
            else
            {
                pat += to_string(mp[pattern[i]]);
            }
        }

        vector<string>ans;
        
        
        for(int i=0; i<words.size(); i++)
        {
            
            string temp = permu(words[i]);
            cout<<words[i]<<" "<<temp<<endl;
            if(temp == pat)
                ans.push_back(words[i]);
        }
        
        
        return ans;
    }
};