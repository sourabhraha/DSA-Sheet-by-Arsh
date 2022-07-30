class Solution {
public:
    int calPoints(vector<string>& ops) {
      
        stack<int>s;
        
        for(int i=0; i<ops.size(); i++)
        {
            string ch = ops[i];
            
             if(ch == "+")
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                
                int c = a + b;
                s.push(a);
                s.push(c);
            }
            
            else if(ch == "D")
            {
                int a = s.top();
                int b = 2*a;
                s.push(b);
            }
            
            else if(ch == "C")
            {
                s.pop();
            }
            
            else{
                s.push(stoi(ch));
            }
        
        }
        
        int ans = 0;
       
        while(!s.empty())
        {
            ans += s.top();
            s.pop();
        }
        return ans;
    }
};