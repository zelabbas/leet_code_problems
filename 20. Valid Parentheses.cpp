/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   20. Valid Parentheses.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:55:29 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/29 11:55:40 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool isValid(string s)
{
	vector <char> sta_ck;
	unordered_map<char, char> parents {
		{')', '('},
		{']', '['},
        {'}', '{'},
	};
	if (s.empty())
		return (false);
	for(const auto& c : s)
	{
		if (parents.find(c) != parents.end())
		{
			if (sta_ck.empty())
				return (false);
			if (sta_ck.at(sta_ck.size() - 1) != parents[c])
				return (false);
			sta_ck.pop_back();
		}
		else
			sta_ck.push_back(c);
	}
	return (sta_ck.empty());
}