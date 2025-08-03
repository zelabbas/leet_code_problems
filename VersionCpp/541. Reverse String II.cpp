/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   541. Reverse String II.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:26:39 by zelabbas          #+#    #+#             */
/*   Updated: 2024/06/03 14:27:04 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2 * k)
        {
            if (i + k <= s.size())
                std::reverse(s.begin() + i, s.begin() + i + k);
            else
                std::reverse(s.begin() + i, s.end());
        }
        return s;
    }
};