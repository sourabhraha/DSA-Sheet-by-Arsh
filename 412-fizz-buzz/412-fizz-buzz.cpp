class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string>ans;
        map<int, string>mp{{3,"Fizz"}, {5, "Buzz"}};
        
        for(int i=1; i<=n; i++)
        {
                string s = "";
            for(auto it:mp)
            {
                if(i%it.first == 0)     s += it.second;
            }
            if(s == "")
                s += to_string(i);
            
            ans.push_back(s);
        }
      
        return ans;
    }
};