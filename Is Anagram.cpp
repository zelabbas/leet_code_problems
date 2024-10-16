/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Is Anagram.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:51:02 by zelabbas          #+#    #+#             */
/*   Updated: 2024/10/16 15:16:32 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
	bool isAnagram(string s, string t) {
		map <char, int> s1;
		map <char, int> s2;

		if (s.length() != t.length())
			return (false);
		for (int i = 0; i < s.length(); i++)
		{
			s1[s[i]] += 1;
			s2[t[i]] += 1;
		}

		 for (auto it = s1.begin(); it != s1.end(); ++it) {
			char ch = it->first;
			if (s1[ch] != s2[ch])
				return false;
		}
		cout << "here" << s1.size();
		return (true);
	}
};

int main() {
	string s = "illd", t = "dill";

	Solution a;

	cout << a.isAnagram(s, t);
}
