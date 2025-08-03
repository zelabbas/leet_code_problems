/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3. Longest Substring Without Repeating Char        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:51:01 by zelabbas          #+#    #+#             */
/*   Updated: 2024/09/09 14:24:06 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

using namespace std;

#define max(a, b) ((a) > (b) ? (a) : (b))

int lengthOfLongestSubstring(char* s)
{
	int lastIndex[128] = {0};
	int maxLen = 0;
	int start = 0;
	int end = 0;

	while (s[end] != '\0')
	{
		start = max(start, lastIndex[s[end]]);
		maxLen = max(maxLen, end - start + 1);
		lastIndex[s[end]] = end + 1;
		end++;
	}

	return maxLen;
}