/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Code   Testcase Testcase Test Result 151.         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:13:01 by zelabbas          #+#    #+#             */
/*   Updated: 2024/06/03 15:13:31 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    string reverseWords(string s) {
		string reverse;
        int len;
        int reminder;
		int	stop;
		// bool space = 0;
        len = s.length() - 1;
        while(len >= 0)
        {
            while(len >=0 && s[len] == ' ')
                len--;
            stop = len;
            while(len >= 0 && s[len] != ' ')
                len--;
            // if (len >= 0)
            //     space = 1;
            reminder = len + 1;
            while(reminder <= stop)
                reverse.append(1, s[reminder++]);
			while (len >= 0 && s[len] == ' ')
				len--;
			if (len >= 0)
				reverse.append(1, ' ');
        }
        return (reverse);
    }
};