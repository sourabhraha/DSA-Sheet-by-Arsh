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
    
    void dfs(TreeNode *root, int depth, int &maxDepth, int &ans)
    {
        if(!root)
            return;
        
        dfs(root->left, depth+1, maxDepth, ans);
        dfs(root->right, depth+1, maxDepth, ans);
        
        if(depth > maxDepth)
        {
            ans = root->val;
            maxDepth = depth;
        }
        
        
    }
    
    int findBottomLeftValue(TreeNode* root) {
        
        int ans = root->val;
        int maxDepth = 0;
        dfs(root, 0, maxDepth, ans);
        return ans;
    }
};