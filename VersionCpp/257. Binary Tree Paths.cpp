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
    void	preorder_rec(vector<string>& _res, TreeNode* root, string tmp) {
		if (!root)
			return ;
        if (!root->left && !root->right) {
            tmp += to_string(root->val);
            _res.push_back(tmp);
            // tmp = "";
            return ;
        }
        tmp += to_string(root->val) + "->";
        preorder_rec(_res, root->left, tmp);
        preorder_rec(_res, root->right, tmp);
	}

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> vec;
        string tmp = "";
        preorder_rec(vec, root, tmp);
        return (vec);
    }
};