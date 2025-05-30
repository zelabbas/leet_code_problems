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
        int CountNode(ListNode* head) {
            int count = 0;
            while(head) {
                count++;
                head = head->next;
            }
    
            return (count);
        }
        ListNode* deleteMiddle(ListNode* head) {
    
            if (!head || !head->next)
                return (nullptr);
            int middleNodePosition = CountNode(head) / 2;
    
            ListNode* tmp = head;
            ListNode* delNode = NULL;
            ListNode* prev = NULL;
    
            while(middleNodePosition > 0) {
                if (middleNodePosition == 1) {
                    prev = tmp;
                }
    
                tmp = tmp->next;
                middleNodePosition--;
            }
    
            delNode = tmp;
            prev->next = tmp->next;
            delete(delNode);
            return (head);
        }
    };