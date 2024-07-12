/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   27. Remove Element.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:52:47 by zelabbas          #+#    #+#             */
/*   Updated: 2024/07/12 15:59:11 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count;
		int	i;
	
		i = 0;
		count = 0;
		for(int j = 0; j < nums.size(); j++)
		{
			if (nums.at(j) != val)
			{
				nums.at(i) = nums.at(j);
				i++;
			}
			else
				count++;
		}
		return (nums.size() - count);
    }
};

int main() {
	vector<int> nums = {3, 2, 2, 3};
	Solution a;
	int newLength = a.removeElement(nums, 3);

	cout << "New length: " << newLength << endl;
	cout << "Modified array: ";
	for (int i = 0; i < newLength; i++)
		cout << nums[i] << " ";
	cout << endl;
	return 0;
}