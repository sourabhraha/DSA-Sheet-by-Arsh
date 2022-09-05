/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>level;
        if(!root) return level;
        
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            vector<int>temp;
            
            for(int i=0; i<size; i++)
            {
                auto node = q.front();
                q.pop();
                temp.push_back(node->val);
                
                for(auto n:node->children)
                    q.push(n);         
            }
            
            level.push_back(temp);
        }
        return level;
    }
};