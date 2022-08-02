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
    
    void countPre(TreeNode *root, int &cnt)
    {
        if(root)
        {
            cnt++;
            countPre(root->left, cnt);
            countPre(root->right, cnt);
        }
    }
    
    
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        int cnt = 0;
        countPre(root, cnt);
        return cnt;
    }
};