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
    int returnDia(TreeNode* root, int &maxi){
         if(!root) return 0;
        int lh = returnDia(root->left, maxi);
        int rh = returnDia(root->right, maxi);
        maxi = max(maxi, lh+rh);
        return max(lh, rh) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        returnDia(root, maxi);
        return maxi;
    }
};