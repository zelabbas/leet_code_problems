/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Code Testcase Testcase Test Result 136. Si        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:00:55 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/31 15:01:05 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        int x = 0;
        for(int i = 0; i < nums.size(); i++)
            x ^= nums[i];
        return (x);
    }
};