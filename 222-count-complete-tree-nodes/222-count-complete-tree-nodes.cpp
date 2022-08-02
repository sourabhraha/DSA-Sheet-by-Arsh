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
    
    int findLeftHeight(TreeNode *node)
    {
        int lh = 0;
        
        while(node)
        {
            lh++;
            node = node->left;
        }
        return lh;
    }
    
    int findRightHeight(TreeNode *node)
    {
        int rh = 0;
        
        while(node)
        {
            rh++;
            node = node->right;
        }
        return rh;
    }
    
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        
        int lh = findLeftHeight(root->left);
        int rh = findRightHeight(root->right);
        
        if(lh == rh) return (2<<lh) - 1;
        
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};