/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   67. Add Binary.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 22:03:44 by zelabbas          #+#    #+#             */
/*   Updated: 2024/07/14 22:44:58 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;


class Solution {
	public:
		string addBinary(string a, string b)
		{
			string	new_str;
			int len_b = b.length() - 1;
			int len_a = a.length() - 1;
			int	sum;
			int reminder = 0;

			while (len_a >= 0 || len_b >= 0)
			{
				sum = reminder;
				
				if (len_a >= 0)
					sum += (a[len_a--] - '0');

				if (len_b >= 0)
					sum += (b[len_b--] - '0');

				new_str += (sum % 2) + '0';
				reminder = (sum / 2);
			}
			if (reminder)
				new_str += '1';
			std::reverse(new_str.begin(), new_str.end());
			return (new_str);
		}
};

int main()
{
	Solution a;

	cout << a.addBinary("1010", "1011") << endl;
}