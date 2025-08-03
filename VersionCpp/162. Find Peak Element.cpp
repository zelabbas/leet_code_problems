/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   162. Find Peak Element.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:11:41 by zelabbas          #+#    #+#             */
/*   Updated: 2024/08/24 16:12:13 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
	int findPeakElement(vector<int>& nums) {
		int ans = 0;
		for(int i = 0; i < nums.size(); i++) {
			if (i)
			{
				if (nums[i] > nums[i -1] && i + 1 < nums.size() && nums[i] > nums[i + 1])
				{
					ans = i;
					break;
				}
				else if (nums[i] > nums[i - 1])
					ans = i;
			}
		}
		return(ans);
	}
};