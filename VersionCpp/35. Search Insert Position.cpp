/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   35. Search Insert Position.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:51:30 by zelabbas          #+#    #+#             */
/*   Updated: 2024/07/12 16:51:38 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
	{
		int left = 0;
		int	right = nums.size() - 1;
		int mid;
		while (left <= right)
		{
			mid = left + (right - left) / 2;
			if (nums[mid] == target)
				return (mid);
			else if (nums[mid] < target)
				left = mid + 1;
			else
				right = mid - 1;
		}
		return (left);
    }
};

int main() {
	vector<int> nums = {1,3,5,6};
	Solution a;

	cout << a.searchInsert(nums, 7);

	return 0;
}