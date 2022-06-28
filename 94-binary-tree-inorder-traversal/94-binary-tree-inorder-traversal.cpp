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
    
    void inorder(vector<int>&ans, TreeNode *root)
    {
        stack<TreeNode*>s;
        while(1)
        {
            if(root != NULL)
            {
                s.push(root);
                root = root->left;
            }
            
            else{
                
                if(s.empty()) break;
                root = s.top();
                ans.push_back(root->val);
                s.pop();
                root = root->right;                
            }
            
        }
    }
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inorder(ans, root);
        return ans;
    }
};