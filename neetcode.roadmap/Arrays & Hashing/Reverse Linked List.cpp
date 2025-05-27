#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


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
        ListNode* reverseList(ListNode* head) {
            ListNode* prev = NULL;
            ListNode* next = NULL;
            ListNode* current = head;

            while (current != NULL) {
                next = current->next;
                current->next = prev; // Reverse the link
                prev = current; // Move prev to current
                current = next; // Move to the next node
            }

            return prev; // Return the new head of the reversed list    
        }
};