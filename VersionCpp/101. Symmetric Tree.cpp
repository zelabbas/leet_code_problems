/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   101. Symmetric Tree.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:28:58 by zelabbas          #+#    #+#             */
/*   Updated: 2024/09/11 17:46:39 by zelabbas         ###   ########.fr       */
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
	bool isSameValue(TreeNode* p, TreeNode* q) {
		if (!p && !q)
			return true;
		if (!p || !q)
			return (false);

		if (p->val != q->val)
			return (false);
		return ( isSameValue(p->left, q->right) &&  isSameValue(p->right, q->left));
	}
	bool isSymmetric(TreeNode* root) {
		return (isSameValue(root->left, root->right));
	}
};