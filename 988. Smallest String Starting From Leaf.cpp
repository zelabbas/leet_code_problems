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

    void dfs(TreeNode* root, string& str,string& smallest) {
		if (!root)
			return ;
        str += 'a' + root->val;
        if (!root->left && !root->right) {
            string path = str;
            reverse(path.begin(), path.end());
		    if(smallest.empty() || path < smallest)
                smallest = path;
        }
		dfs(root->left, str, smallest);
		dfs(root->right, str, smallest);
        str.pop_back();
	}

    string smallestFromLeaf(TreeNode* root) {
        string path;
        string smallest;
        dfs(root, path, smallest);
        return (smallest);
    }
};