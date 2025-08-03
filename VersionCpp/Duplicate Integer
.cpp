/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Duplicate Integer
.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:24:48 by zelabbas          #+#    #+#             */
/*   Updated: 2024/10/16 14:24:48 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <set>
#include <vector>
using namespace std;

class Solution {
public:
	bool hasDuplicate(vector<int>& nums) {
		set <int> deplucate;

		for (int i = 0; i < nums.size(); i++)
		{
			if (deplucate.find(nums[i]) != deplucate.end())
				return (true);
			else
				deplucate.insert(nums[i]);
		}
		return (false);
	}
};

int main() {

	vector <int> nums = {1, 2, 3, 4};
	Solution a;
	cout << a.hasDuplicate(nums) << "\n";
	return (0);
}