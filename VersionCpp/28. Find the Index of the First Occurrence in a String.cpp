/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   28. Find the Index of the First Occurrence         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:25:37 by zelabbas          #+#    #+#             */
/*   Updated: 2024/07/12 16:26:37 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	int	ft_strncmp(const char *s1, const char *s2, size_t n)
	{
		if (n == 0)
			return (0);
		while ((*s1 || *s2) && (n - 1) > 0)
		{
			if ((unsigned char)*s1 != (unsigned char)*s2)
				return ((unsigned char)*s1 - (unsigned char)*s2);
			s1++;
			s2++;
			n--;
		}
		return ((unsigned char)*s1 - (unsigned char)*s2);
	}
    int strStr(string haystack, string needle) 
	{
		for(int i = 0;i < haystack.length(); i++)
		{
			if (haystack[i] == needle[0] && \
			!ft_strncmp(&haystack[i], &needle[0], needle.length()))
				return (i);
		}
		return (-1);
	}
};

int main() {
	string haystack = "astbutsad";
	string needle = "sad";
	Solution a;

	cout << a.strStr(haystack, needle);

	return 0;
}