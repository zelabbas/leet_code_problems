/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   58. Length of Last Word.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:55:45 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/29 11:55:46 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_len(char *s)
{
    int i = 0;

    while(s[i] && s[i] != 32)
        i++;
    return (i);
}

int lengthOfLastWord(char* s) {
    
    int i = 0;
    while(s[i])
        i++;
	i--;
    while (i >= 0)
    {
        if (s[i] != 32 && s[i] != 9)
            break;
        i--;
    }
    while(i >= 0)
    {
        if (s[i] == 32 || s[i] == 9)
            break;
        i--;
    }
    i++;
    return(ft_len(&s[i]));
}