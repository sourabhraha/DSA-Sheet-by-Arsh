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
    
    int calMaxPath(TreeNode *node, int &maxi)
    {
    
       if(!node) return 0; 
        
       int leftSum = max(0, calMaxPath(node->left, maxi));
       int rightSum = max(0, calMaxPath(node->right, maxi));
        
       maxi = max(maxi, leftSum + rightSum + node->val);
        
       return node->val + max(leftSum, rightSum);
    
    }
    
    
    int maxPathSum(TreeNode* root) {
        if(!root) return 0;
        int maxi = INT_MIN;
        calMaxPath(root, maxi);
        return maxi;
    }
};