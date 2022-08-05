/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
       return !root ? " null" : " " + to_string(root->val) + serialize(root->left) + serialize(root->right);
    }

    // Decodes your encoded data to tree.
    
    TreeNode* buildTree(stringstream &ss)
    {
    
            string temp;
            ss>>temp;
        
            if(temp == "null") return NULL;
        
            TreeNode *node = new TreeNode(stoi(temp));
            node->left = buildTree(ss);
            node->right = buildTree(ss);    
            
            return node;
    }
    
    
    
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        TreeNode *root = buildTree(ss);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));