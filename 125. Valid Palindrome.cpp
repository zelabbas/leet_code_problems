/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   125. Valid Palindrome.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 21:45:02 by zelabbas          #+#    #+#             */
/*   Updated: 2024/10/16 13:02:18 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

class Solution {
public:
	bool isPalindrome(string s) {
		int i = 0;
		int j = 0;
		
		string tmp;
		while (i < s.length())
		{
			if (isalnum(s[i]))
				tmp += tolower(s[i]);
			i++;
		}
		
		i = 0;
		j = tmp.length() - 1;

		while (i < j)
		{
			if (tmp[i] != tmp[j])
				return (false);
			i++;
			j--;
		}
		return (true);
	}
};


int main(int ac, char **av) {
    
    Solution a;

    cout << a.isPalindrome(av[1]) << endl;
}