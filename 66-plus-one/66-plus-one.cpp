class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();
        int j = n-1;
        int carry = 1;
        
        vector<int>ans(n);
        
        while(j >= 0)
        {
            int num = digits[j] + carry;
            if(num >= 10)
            {
                ans[j] = num%10;
                carry = 1;
            }
            else{
                ans[j] = num;
                carry = 0;
            }
            
            j--;
        }
        
        if(carry){
            vector<int>ans2;
            ans2.push_back(1);
            ans2.insert(ans2.end(), ans.begin(), ans.end());
            return ans2;
        }
        else{
            return ans;
        }
        
    }
};