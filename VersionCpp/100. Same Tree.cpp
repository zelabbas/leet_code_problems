/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100. Same Tree.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:22:13 by zelabbas          #+#    #+#             */
/*   Updated: 2024/09/11 17:22:34 by zelabbas         ###   ########.fr       */
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
	bool isSame = true;
	bool isSameTree(TreeNode* p, TreeNode* q) {
		if (!p && !q) {
			return true;
		}
		else if (!p || !q) {
			isSame = false;
			return (false);
		}
		isSameTree(p->left, q->left);
		if (p->val != q->val)
			isSame = false;
		isSameTree(p->right, q->right);
		return (isSame);
	}
};