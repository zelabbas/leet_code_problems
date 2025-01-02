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
    
    void rightView(TreeNode* root,int& maxLevel, int level ,vector<int>& vec) { 
        if (!root)
            return;
        if (level > maxLevel) {
            vec.push_back(root->val);
            maxLevel = level;
        }
        rightView(root->right, maxLevel, level+ 1 ,vec);
        rightView(root->left, maxLevel, level + 1 ,vec);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        int max = -1;
        rightView(root, max, 0,res);
        return (res);
    }
};