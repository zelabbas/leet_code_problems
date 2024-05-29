/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6. Zigzag Conversion.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:51:40 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/29 11:51:41 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
            return s;
        int value = 0;
        string str;
        int x = 1;
        int size = s.size();
        string tab_str[numRows];
        for(size_t i = 0; i < size; i++)
        {
            tab_str[value] += s[i];
            if (value == (numRows - 1) || value == 0 && i != 0)
                x *= -1;
            value += x;
        }
        for(size_t j= 0; j < numRows; j++)
            str +=tab_str[j];
        return str;
    }
};