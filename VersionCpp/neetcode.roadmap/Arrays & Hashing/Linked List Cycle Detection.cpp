// Linked List Cycle Detectio
#include<iostream>
#include<vector>
using namespace std;


class Solution {
    public:
        bool hasCycle(ListNode* head) {
            if (head == NULL || head->next == NULL)
                return false;
            ListNode* fast = head->next->next;
            ListNode* slow = head->next;
    
            while(fast && fast->next != NULL && slow &&  slow->next != NULL) {
                if (fast == slow)
                    return true;
                fast = fast->next->next;
                slow = slow->next;
            }
    
            return false;
        }
    };