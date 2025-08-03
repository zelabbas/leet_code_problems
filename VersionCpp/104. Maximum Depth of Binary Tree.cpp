/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   104. Maximum Depth of Binary Tree.cpp              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:43:59 by zelabbas          #+#    #+#             */
/*   Updated: 2024/09/11 21:44:25 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int maxDepth(TreeNode* root) {
		if (!root)
			return 0;
		int lDepth = maxDepth(root->left);
		int rDepth = maxDepth(root->right);
		return max(lDepth, rDepth) + 1;
	}
};