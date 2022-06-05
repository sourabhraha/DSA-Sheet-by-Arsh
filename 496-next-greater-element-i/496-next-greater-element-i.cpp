class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int>st;
        vector<int>ans;
        unordered_map<int, int>ump;
        
        int n2 = nums2.size();
        
        for(int i = n2-1; i>=0; i--)
        {

            while(!st.empty() && st.top() < nums2[i])
                st.pop();
            
            ump[nums2[i]] = (st.empty()) ? -1 : st.top();
            
            st.push(nums2[i]);
        }
        
        for(int n:nums1)
            ans.push_back(ump[n]);
        return ans;
    }
};