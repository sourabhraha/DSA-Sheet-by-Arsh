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
    int findBottomLeftValue(TreeNode* root) {
        
        
        
        queue<TreeNode*>q;
        q.push(root);
        
        vector<int>level;
        while(!q.empty())
        {
            
            int size = q.size();
            
            level.clear();
            
            for(int i=0; i<size; i++)
            {
                auto node = q.front();
                q.pop();
                
                if(node->left)    q.push(node->left);
                if(node->right)   q.push(node->right);
                
                level.push_back(node->val);
            }
            
        }

        return level[0];
        
    }
};