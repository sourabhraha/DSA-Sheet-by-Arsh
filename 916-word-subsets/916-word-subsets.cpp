class Solution {
public:
    
    map<char, int> compute(string temp)
    {
         map<char, int>cnt;
         for(int i=0; i<temp.length(); i++)  cnt[temp[i]]++;
         return cnt;
    }
    
    
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        
        
        map<char, int>mp;
      
        for(int i=0; i<words2.size(); i++)
        {
            string temp = words2[i];
            map<char, int>check = compute(temp);
            
            for(char ch = 'a'; ch <= 'z'; ch++)
                mp[ch] = max(mp[ch], check[ch]);
      
        }
        
        vector<string>ans;
        
        for(int j=0; j<words1.size(); j++)
        {
            string temp = words1[j];
            map<char, int>cnt = compute(temp);
             
            bool flag = true;
   
            for(char ch = 'a'; ch <= 'z'; ch++)
            {
            
                if(mp[ch] > cnt[ch])
                {
                    flag = false;
                    break;
                }   
            }
            
            if(flag == true) ans.push_back(words1[j]);
            
        }
     
        return ans;   
    }
};