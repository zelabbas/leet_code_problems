/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Check_if_a_String_Is_an_Acronym_of_Words.c         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:55:59 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/29 11:56:01 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
bool isAcronym(char ** words, int wordsSize, char * s){
   int i , j ;
   char tab[101];
   for (i = 0 ; i < wordsSize; i++)
   {
       tab[i] = words[i][0];
   }
   
   for (j = 0 ; j < wordsSize ; j++)
   {
       if (s[j] != tab[j])
       {
           return false;
           break;
       }
   }
   if (s[j])
   {
       return false; 
   }
   return true;
}
