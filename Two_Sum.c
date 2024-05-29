/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Two_Sum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:57:13 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/29 11:57:30 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j;
    int *tab = NULL;

    for (i = 0; i < numsSize; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                tab = (int*)malloc(2 * sizeof(int));
                if (tab == NULL)
                {
                    return NULL;
                }

                tab[0] = i;
                tab[1] = j;
                *returnSize = 2;

                return tab;
            }
        }
    }

    *returnSize = 0;
    return NULL; // Return NULL if no solution is found
}
