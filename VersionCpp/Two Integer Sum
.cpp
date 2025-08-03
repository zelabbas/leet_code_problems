/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Two Integer Sum
.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:19:40 by zelabbas          #+#    #+#             */
/*   Updated: 2024/10/16 15:19:40 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map <int, int> _target;
		vector <int> vec;

		for (int i = 0; i < nums.size(); i++)
		{
			if (_target.find(nums[i]) != _target.end()) {
				vec.push_back(_target[nums[i]]);
				vec.push_back(i);
				return (vec);
			}
			else
				_target[target - nums[i]] = i;
		}
		return (vec);
	}
};

 // another solution using TWO POINTERS:
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        vector<int> _res;


        while(j > i) {
            int sum = (nums[j] + nums[i]);
            if (sum == target) {
                _res.push_back(i + 1);
                _res.push_back(j + 1);
                return (_res);
            }
            if (sum > target)
                j--;
            else if (target > sum)
                i++;
        }
        return (_res);
	}
};



int main() {

	vector <int> nums = {5, 5};
	int target = 10;
	vector <int> vec;

	Solution a;
	vec = a.twoSum(nums, target);
	if (!vec.empty())
		cout << vec[0] << " " << vec[1] << endl;
}