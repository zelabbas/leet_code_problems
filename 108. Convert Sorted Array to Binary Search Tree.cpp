/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   108. Convert Sorted Array to Binary Search         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:25:41 by zelabbas          #+#    #+#             */
/*   Updated: 2024/10/16 12:54:16 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

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
	TreeNode* sortedArrayToBSTRecur(vector<int> & nums, int start, int end) {
		int mid;
		if (start > end) return (NULL);

		mid = start + (end - start) / 2;

		TreeNode* root = new TreeNode(nums[mid]);
		
		root->left = sortedArrayToBSTRecur(nums, start, mid - 1);
		root->right = sortedArrayToBSTRecur(nums, mid + 1, end);

		return (root);
	}
	
	TreeNode* sortedArrayToBST(vector<int>& nums) {
		return (sortedArrayToBSTRecur(nums, 0, nums.size() - 1));
	}
};