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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tmpA, *tmpB;
        int lenA, lenB;
    
        tmpA = headA, tmpB = headB;
        lenA = 0, lenB = 0;
        while(tmpA) {
            lenA++;
            tmpA = tmpA->next;
        }
        while(tmpB) {
            lenB++;
            tmpB = tmpB->next;
        }
        tmpA = headA;
        tmpB = headB;
        if (lenA > lenB) {
            for(int i = 0; i < lenA - lenB; i++) {
                tmpA = tmpA->next;
            }
        }
        else {
            for(int i = 0; i < lenB - lenA; i++) {
                tmpB = tmpB->next;
            }
        }

        while(tmpA != tmpB) {
            tmpA = tmpA->next;
            tmpB = tmpB->next;
        }
        return (tmpA);
    }
};