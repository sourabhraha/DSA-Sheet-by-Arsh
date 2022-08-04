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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        map<int, int>mp;
        int n = inorder.size(), m = postorder.size();
        
        for(int i=0; i<n; i++)
        {
            mp[inorder[i]] = i;
        }
        
        TreeNode *root = helper(inorder, 0, n-1, postorder, 0, m-1, mp);
        return root;
        
    }
    
    TreeNode* helper(vector<int>&inorder, int inStart, int inEnd,                                         vector<int>&postorder, int postStart, int postEnd, map<int, int>&mp)
    {
        
        if(inStart > inEnd || postStart > postEnd) return NULL;
        
        
        TreeNode *root = new TreeNode(postorder[postEnd]);
        
        int inRoot = mp[root->val];
        int numsLeft = inRoot - inStart;
        
        
        
        root->left = helper(inorder,inStart, inRoot-1, postorder, postStart,                                            postStart+numsLeft-1, mp);
        
        root->right = helper(inorder, inRoot+1, inEnd, postorder,
                                postStart+numsLeft, postEnd-1, mp);
        
        return root;
        
        
    }
    
    
};