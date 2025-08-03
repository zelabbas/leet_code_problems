/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   83. Remove Duplicates from Sorted List.cpp         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:42:15 by zelabbas          #+#    #+#             */
/*   Updated: 2024/09/08 15:42:26 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr1;
        ListNode* curr2;
        ListNode* dublicate;
    
        curr1 = head;
        while(curr1) {
            curr2 = curr1;
            while(curr2->next) {
                if (curr2->next->val == curr1->val) {
                    dublicate = curr2->next;
                    curr2->next = curr2->next->next;
                    delete dublicate;
                }
                else {
                    curr2 = curr2->next;
                }
            }
            curr1 = curr1->next;
        }
        return (head);
    }
};