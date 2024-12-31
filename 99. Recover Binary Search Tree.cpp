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

    void copyDataToVec(TreeNode* root, vector<int>& vec) {
        if (!root)
            return ;
        vec.push_back(root->val);
        copyDataToVec(root->left, vec);
        copyDataToVec(root->right, vec);
    }

    void correctBST(TreeNode* root, vector<int>& vec, int& index) {
        if (!root)
            return ;
        correctBST(root->left, vec, index);
        root->val = vec[index];
        index++;
        correctBST(root->right, vec, index);
    }

    void recoverTree(TreeNode* root) {
        vector<int> vec;
        int index = 0;
        copyDataToVec(root, vec);
        sort(vec.begin(), vec.end());
        correctBST(root, vec, index);
    }
};