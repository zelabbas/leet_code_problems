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
	void	PostOrder_rec(vector<int>& _res, TreeNode* root) {
		if (!root)
			return ;
		PostOrder_rec(_res, root->left);
		PostOrder_rec(_res, root->right);
		_res.push_back(root->val);
	}

	vector<int> postorderTraversal(TreeNode* root) {
		vector<int> _vec;
		PostOrder_rec(_vec, root);
		return (_vec);
	}
};