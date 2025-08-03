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
    void preorderTraversal(Node* root, vector<int>& vec) {
        if (!root)
            return ;
        vec.push_back(root->val);
        for(int i = 0; i < root->children.size(); i++) {
            preorderTraversal(root->children[i], vec);
        }
    }

    vector<int> preorder(Node* root) {
        vector<int> res;
        preorderTraversal(root, res);
        return (res);
    }
};