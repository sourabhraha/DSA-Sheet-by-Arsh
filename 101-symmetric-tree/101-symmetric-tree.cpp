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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        queue<TreeNode*>q;
        q.push(root->left);
        q.push(root->right);
        
        while(!q.empty())
        {

            TreeNode *node1 = q.front();
            q.pop();
            TreeNode *node2 = q.front();
            q.pop();
            
            if(!node1 && !node2) continue;
            if(!node1 || !node2) return false;
            
            if(node1->val != node2->val) return false;
            
          
            q.push(node1->left);
            q.push(node2->right);
            q.push(node1->right);
            q.push(node2->left);
    
        }
        return true;
    }
};