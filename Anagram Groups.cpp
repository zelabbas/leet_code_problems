/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Anagram Groups.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:37:46 by zelabbas          #+#    #+#             */
/*   Updated: 2024/10/16 20:50:46 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		string tmp;
		map <string, vector <string> > _map;
		vector <vector <string> > res;
		for (auto &str : strs)
		{
			tmp = str;
			sort(tmp.begin(), tmp.end());
			_map[tmp].push_back(str);
		}
		for (auto &vec : _map)
			res.push_back(vec.second);
		return (res);
	}
};


int main() {
	vector <string> strs = {"eat","tea","tan","ate","nat","bat"};
	Solution a;

	a.groupAnagrams(strs);
}