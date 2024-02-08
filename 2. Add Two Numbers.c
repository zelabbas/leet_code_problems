#include <stdlib.h> // add this header just if you want test in your pc 

/**
 * Definition for singly-linked list.*/

  struct ListNode {
      int val;
      struct ListNode *next;
};
 

 void   ft_add_back(struct ListNode **L, int n)
 {
    struct ListNode *node;

    node = malloc(sizeof(struct ListNode));
    node->val = n;
    node->next = NULL;
    if (!*L || !L)
        *L = node;
    else
    {
        struct ListNode *tmp;
        tmp = *L;
        while(tmp->next)
            tmp = tmp->next;
        tmp->next = node;
    }
 }

int ft_size_list(struct ListNode *list)
{
    int count = 0;

    while(list)
    {
        list = list->next;
        count++;
    }
    return (count);
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode *list = NULL;
    int sum = 0;
    int rest = 0;
    int size_l1 = ft_size_list(l1);
    int size_l2 = ft_size_list(l2);

    if (size_l1 == size_l2)
    {
        while(size_l1-- > 0)
        {
            sum = l1->val + l2->val + rest;
            rest = sum / 10;
            ft_add_back(&list, sum % 10);
            l1 = l1->next;
            l2 = l2->next;
        }
        if (rest)
            ft_add_back(&list, rest);
    }
    else
    {
        if (size_l1 > size_l2)
        {
            while(size_l1-- > 0)
            {
                if (size_l2-- > 0)
                {
                    sum = l1->val + l2->val + rest;
                    rest = sum / 10;
                    ft_add_back(&list, sum % 10);
                }
                else
                {
                    sum = l1->val + rest;
                    rest = sum / 10;
                    ft_add_back(&list, sum % 10);
                }
                l1 = l1->next;
                if (l2->next)
                  l2 = l2->next;
            }
            if (rest)
                ft_add_back(&list, rest);
        }
        else
        {
            while(size_l2-- > 0)
            {
                if (size_l1-- > 0)
                {
                    sum = l1->val + l2->val + rest;
                    rest = sum / 10;
                    ft_add_back(&list, sum % 10);
                }
                else
                {
                    sum = l2->val + rest;
                    rest = sum / 10;
                    ft_add_back(&list, sum % 10);
                }
                l2 = l2->next;
                if (l1->next)
                    l1 = l1->next;
            }
            if (rest)
                ft_add_back(&list, rest);
        }
    }
    return (list);
}