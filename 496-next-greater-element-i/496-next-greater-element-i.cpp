class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size(), m = nums2.size();
        int flag = 0;
        vector<int>ans;
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(nums1[i] == nums2[j])
                {
                    int k = j+1;
                    while(k<m)
                    {
                        if(nums2[k] > nums1[i])
                        {
                            ans.push_back(nums2[k]);
                            break;
                        }
                        k++;
                    }
                    if(k == m) ans.push_back(-1);
                    
                   flag = 1;
                }
            }
            if(flag == 0)   ans.push_back(-1);
        }
        return ans;
    }
};