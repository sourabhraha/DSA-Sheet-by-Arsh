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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
     
        TreeNode *node = root;
        if(!root){
        
            return new TreeNode(val);
        }
        
        TreeNode *newNode = new TreeNode(val);

        while(root)
        {
            if(root->left == NULL && root->val > val)
            {
                root->left = newNode;
                break;
            }
            
            if(root->right == NULL && root->val < val)
            {
                root->right = newNode;
                break;
            }
            
            else{
                if(root->val < val){
                    root = root->right;
                }
                else
                    root = root->left;
            }
        }
        
        return node;
    }
};