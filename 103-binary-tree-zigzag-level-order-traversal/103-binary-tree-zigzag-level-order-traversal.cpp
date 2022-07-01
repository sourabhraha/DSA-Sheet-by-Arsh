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
    
    void solveZigZag(vector<vector<int>>&ans, TreeNode *root)
    {

        queue<TreeNode*>q;
        q.push(root);
        bool flag = true;
        
        while(!q.empty())
        {

            int size = q.size();
            vector<int>level;
            
            for(int i=0; i<size; i++)
            {
                root = q.front();
                q.pop();
                
                if(root->left != NULL) q.push(root->left);
                if(root->right != NULL) q.push(root->right);
                level.push_back(root->val);
                
            }
            if(flag){
                ans.push_back(level);
                flag = !flag;
            }
            else{
                reverse(level.begin(), level.end());
                ans.push_back(level);
                flag = !flag;
            }
            
        }
    
    }
    
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root) return ans;
        solveZigZag(ans, root);
        return ans;
    }
};