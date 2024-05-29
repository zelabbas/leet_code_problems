/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Palindrome_Number.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:56:56 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/29 11:57:07 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool isPalindrome(int x)
{
    if (x < 0) {
        return false; // Negative numbers are not palindromes
    }
    
    int original = x;
    long int reversed = 0;
    
    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    
    return original == reversed;
}
