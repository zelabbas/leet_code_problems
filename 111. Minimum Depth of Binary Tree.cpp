/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   111. Minimum Depth of Binary Tree.cpp              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:02:00 by zelabbas          #+#    #+#             */
/*   Updated: 2024/09/12 15:02:23 by zelabbas         ###   ########.fr       */
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
	int minDepth(TreeNode* root) {
		if (!root)
			return (0);
		if (!root->left)
			return (minDepth(root->right) + 1);
		if (!root->right)
			return (minDepth(root->left) + 1);
		return (min(minDepth(root->left), minDepth(root->right)) + 1);
	}
};