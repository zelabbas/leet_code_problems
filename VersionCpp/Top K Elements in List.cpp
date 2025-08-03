/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Top K Elements in List.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:52:32 by zelabbas          #+#    #+#             */
/*   Updated: 2024/10/16 21:45:30 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
	vector<int> topKFrequent(vector<int>& nums, int k) {
		map <int, int> _map;
		vector < pair<int, int> >_vec;
		vector <int> _res;

		for (auto n : nums)
			_map[n] += 1;
		for (auto it : _map)
			_vec.push_back(make_pair(it.second, it.first));
		sort(_vec.rbegin(), _vec.rend());

		for (int i = 0; i < k; i++)
			_res.push_back(_vec[i].second);
		return (_res);
	}
};


int main() {
	Solution a;
	vector <int> nums = {1,2,2,3,3,3};
	a.topKFrequent(nums, 2);
}