/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void solve(vector<vector<int>>&ans, TreeNode *root, int depth)
    {

        if(!root) return;
        if(depth == ans.size())
        {
            ans.push_back({});
        }
        
        ans[depth].push_back(root->val);
        solve(ans, root->left, depth+1);
        solve(ans, root->right, depth+1);
        
    }
    
    
    vector<vector<int>> levelOrder(TreeNode* root) {
            
        vector<vector<int>>ans;
        if(!root) return ans;
        solve(ans, root, 0);
        return ans;
    }
};