/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   112. Path Sum.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:40:05 by zelabbas          #+#    #+#             */
/*   Updated: 2024/09/12 14:40:36 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool hasPathSum(node* Node, int sum)
{
	if (Node == NULL)
		return 0;
 
	bool ans = 0;
 
	int subSum = sum - Node->data;

	if (subSum == 0 && Node->left == NULL
		&& Node->right == NULL)
		return 1;
 
	if (Node->left)
		ans = ans || hasPathSum(Node->left, subSum);
	if (Node->right)
		ans = ans || hasPathSum(Node->right, subSum);
 
	return ans;
}