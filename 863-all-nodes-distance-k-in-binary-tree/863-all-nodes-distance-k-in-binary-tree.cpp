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
    
    void childToParent(TreeNode *root, unordered_map<TreeNode*, TreeNode*>&track)
    {
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            auto node = q.front();
            q.pop();
            
            if(node->left)
              {
                track[node->left] = node; 
                q.push(node->left);
            }
            
            if(node->right) 
            {
                track[node->right] = node;
                q.push(node->right);
            }
        }
    }
    
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        vector<int>ans;
        if(!root) return ans;
        
        unordered_map<TreeNode*, TreeNode*>track;
        childToParent(root, track);
        
        unordered_map<TreeNode*, bool>visited;
        
        queue<TreeNode*>q;
        q.push(target);
        visited[target] = true;
        
        int level = 0;
        while(!q.empty())
        {
            int size = q.size();
            if(level == k) break;
            level++;
            
            for(int i=0; i<size; i++)
            {
                auto node = q.front();
                q.pop();
                
                if(node->left && !visited[node->left])
                {
                    q.push(node->left);
                    visited[node->left] = true;
                }
                
                if(node->right && !visited[node->right])
                {
                    q.push(node->right);
                    visited[node->right] = true;
                }
                
                if(track[node] && !visited[track[node]])
                {
                    q.push(track[node]);
                    visited[track[node]] = true;
                }
        }
    }
                            
        while(!q.empty())
        {    
            auto node = q.front(); q.pop();
            ans.push_back(node->val);
        }
        
        return ans;
    }
};