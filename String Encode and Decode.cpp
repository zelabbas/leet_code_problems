/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   String Encode and Decode.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:52:04 by zelabbas          #+#    #+#             */
/*   Updated: 2024/10/21 21:52:40 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;


class Solution {
private:
	map<string, vector<string> > memory;
public:

	string encode(vector<string>& strs) {
		string key = "";
		for (string s: strs) key += s;
		memory[key] = strs;
		return (key);
	}

	vector<string> decode(string s) {
		return (memory[s]);
	}
};