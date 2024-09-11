/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   141. Linked List Cycle.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:10:23 by zelabbas          #+#    #+#             */
/*   Updated: 2024/09/11 18:11:53 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	bool hasCycle(ListNode *head) {
		ListNode* P1;
		ListNode* P2;
		bool	isCircle = false;
		
		if (!head)
			return (isCircle);
		P1 = head;
		P2 = head->next;
		
		while(P1) {
			if (P1 == P2) {
				isCircle = true;
				break;
			}
			P1 = P1->next;
			if (P2 && P2->next)
				P2 = P2->next->next;
			else
				break;
		}
		return (isCircle);
	}
};