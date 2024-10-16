/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   345. Reverse Vowels of a String.cpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:38:56 by zelabbas          #+#    #+#             */
/*   Updated: 2024/08/24 17:26:20 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:

	bool isVowels(char c)
	{
		if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'))
			return (true);
		else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			return (true);
		return (false);
	}
    string reverseVowels(string s) {
		int i = 0;
		int len = s.length() - 1;
		while (i < len)
		{
			
			if (isVowels(s[i]) && isVowels(s[len]))
			{
				s[i] ^= s[len];
				s[len] ^= s[i];
				s[i] ^= s[len];
				i++;
				len--;
			}
			else if (!isVowels(s[i]))
				i++;
			else if (!isVowels(s[len]))
				len--;
		}
		return (s);
    }
};