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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        map<int , int> numbers;
        ListNode* head = NULL;
        ListNode* tail = NULL;

        for (int i = 0; i < lists.size(); i++) {
            while(lists[i]) {
               numbers[lists[i]->val]++; 
                lists[i] = lists[i]->next;
            }
        }

        for (auto it : numbers) {
            for (int i = 0; i < it.second ; i++) {
                ListNode* node = new ListNode(it.first);

            if (!head) {
                head = node;
                tail = node;
            } else {
                tail->next = node;
                tail = node;
            }
            }
        }
        return head;
    }
};