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
