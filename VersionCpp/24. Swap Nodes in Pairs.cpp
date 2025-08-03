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
	ListNode* swapPairs(ListNode* head) {
		ListNode* tmp;
		int	   _swap;
		
		tmp = head;
		if(!head)
			return (nullptr);
		while(tmp->next)
		{
			_swap = tmp->val;
			tmp->val =  tmp->next->val;
			tmp->next->val = _swap;
			if (tmp->next->next)
				tmp = tmp->next->next;
			else
				break;
		}
		return (head);
	}
};