class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
    
        vector<int>ans;
        
        if(nums.size() == 1)
        {
          
            ans = nums;
            return ans;
        }
        
        
       else{ 
        vector<int>odd, even;
        int n = nums.size();
        
        for(int i=0; i<n; i++)
        {
            if(i%2 == 0)  even.push_back(nums[i]);
            else          odd.push_back(nums[i]);
            
        }
        
        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end());
        
      for(auto it:odd) cout<<it<<" ";
        cout<<endl;
      for(auto it:even) cout<<it<<" ";
        
      
       for(int i=0; i<n/2; i++)
       {
             ans.push_back(even[i]);
             ans.push_back(odd[i]);
       }
        
       int i = n/2;
       if(odd.size() > i)
       {
           for(int j=i; j<odd.size(); j++)
               ans.push_back(odd[i]);
       }
      if(even.size() > i)
       {
           for(int j=i; j<even.size(); j++)
               ans.push_back(even[i]);
       }
           
       return ans; 
       }
    }
};