/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    bool getPath(TreeNode *root, vector<pair<TreeNode*, int>>&path, TreeNode *node)
    {
        if(!root) return false;
        path.push_back({root, root->val});
        
        if(root == node) return true;
        if(getPath(root->left, path, node) || 
           getPath(root->right, path, node))
            return true;
        path.pop_back();
        return false;
    }

    
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(!root) return root;
        
        vector<pair<TreeNode*, int>>pPath, qPath;
        
        getPath(root, pPath, p);
        getPath(root, qPath, q);
        
        auto itP = pPath.begin(), itQ = qPath.begin();
        
        TreeNode *ans = NULL;
        while(itP != pPath.end() || itQ != qPath.end())
        {
           if(itP == pPath.end() || itQ == qPath.end()) break;
           if(itP->second == itQ->second)
                ans = itP->first;
            itP++;
            itQ++;
        }
        
 
        
        return ans;
    }
};