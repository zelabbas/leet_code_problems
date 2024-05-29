/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8. String to Integer (atoi).cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:53:25 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/29 11:55:01 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int sign;
        long result;
        int i;
    
        sign = 1;
        result = 0;
        i = 0;
        while(s[i] && ((s[i] >= 9 && s[i] <= 13) || s[i] == 32))
            i++;
        if (s[i] == '+' || s[i] == '-')
        {
            if (s[i] == '-')
                 sign *= -1;
            i++;
        }
        while(s[i] && (s[i] >= '0' && s[i] <= '9'))
        {
            result = result * 10 + (s[i] - '0');
            i++;
            if ((result > INT_MAX && sign == -1))
                return (-2147483648);
            else if (s[i] && (result > INT_MAX))
                return (2147483647);
        }
        return ((int)result * sign);
    }
};

// second sultion :
/*
class Solution {
public:
    int myAtoi(std::string s) {
        int sign = 1;
        long result = 0;
        int i = 0;

        // Skipping whitespace characters
        while (isspace(s[i]))
            i++;

        // Checking for optional sign
        if (s[i] == '+' || s[i] == '-') {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Calculating the result
        while (isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');

            // Handling overflow
            if (result * sign > INT_MAX) return INT_MAX;
            if (result * sign < INT_MIN) return INT_MIN;

            i++;
        }

        return result * sign;
    }
};
*/