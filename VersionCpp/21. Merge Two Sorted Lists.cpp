/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   21. Merge Two Sorted Lists.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:50:10 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/29 11:50:58 by zelabbas         ###   ########.fr       */
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
    void    addToBack(ListNode **list, ListNode *node)
    {
        ListNode*   tmp;
    
        tmp = *list;
        if (!(*list))
            *list = node;
        else
        {
            while(tmp->next)
                tmp = tmp->next;
            tmp->next = node;
        }
    }
	
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *newList = NULL;
        ListNode *node;
    
        while(list1 || list2)
        {
            if (!list1)
            {
                node = list2;
                list2 = list2->next;
            }
            else if (!list2)
            {
                node = list1;
                list1 = list1->next;
            }
            else if (list1->val > list2->val)
            {
                node = list2;
                list2 = list2->next;
            }
            else
            {
                node = list1;
                list1 = list1->next;
            }
            node->next = NULL;
            addToBack(&newList, node);
        }
        return (newList);
    }
};