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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int n = preorder.size(), m = inorder.size();
        
        map<int, int>mp;
        for(int i=0; i<m; i++)
            mp[inorder[i]] = i;
        
        TreeNode *root = helper(preorder, 0, n-1, inorder, 0, m-1, mp);
        return root;
    }
    
    TreeNode* helper(vector<int>&preorder, int preStart, int preEnd, 
                     vector<int>&inorder, int inStart, int inEnd, 
                     map<int, int>&mp)
    {
        
        if(preStart > preEnd || inStart > inEnd) return NULL;
        
        TreeNode *root = new TreeNode(preorder[preStart]);
        
        int inRoot = mp[root->val];
        int numsLeft  = inRoot - inStart;
        
        root->left = helper(preorder, preStart+1, preStart+numsLeft,
                            inorder, inStart, inRoot-1, mp);
        root->right = helper(preorder, preStart+numsLeft+1, preEnd,
                             inorder, inRoot+1, inEnd, mp);
        
        return root;
    }
};