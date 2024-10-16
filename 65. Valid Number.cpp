/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   65. Valid Number.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:58:23 by zelabbas          #+#    #+#             */
/*   Updated: 2024/09/09 22:08:54 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <regex>

using namespace std;

// class Solution {
// public:
// 	bool isNumber(string s) {
// 		double number;
// 		stringstream ss(s);
// 		ss >> number;

// 		if (ss.fail() || !ss.eof())
// 			return (false);
// 		return (true);
// 	}
// };


class Solution {
public:
	bool isNumber(string s) {
		std::regex numberPattern(R"(^\s*[+-]?((\d+(\.\d*)?)|(\.\d+))([eE][+-]?\d+)?\s*$)");
		return std::regex_match(s, numberPattern);
	}
};

int main(int ac, char **av) {
	
	Solution A;
	int i = 1;
	while (i < ac)
	{
		cout << A.isNumber(static_cast<string>(av[i])) << endl;
		i++;
	}
	
}

