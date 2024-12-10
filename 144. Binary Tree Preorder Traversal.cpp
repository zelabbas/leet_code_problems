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
	void	preorder_rec(vector<int>& _res, TreeNode* root) {
		if (!root)
			return ;
		_res.push_back(root->val);
		preorder_rec(_res, root->left);
		preorder_rec(_res, root->right);
	}

	vector<int> preorderTraversal(TreeNode* root) {
		 vector<int> _vec;
		 preorder_rec(_vec, root);
		 return (_vec);
	}
};