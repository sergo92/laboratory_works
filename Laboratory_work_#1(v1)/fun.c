#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fun.h"


 char *get_word()
 {
     int max_size = 100;
     char* word = malloc (sizeof(char) *max_size);
     printf("Please enter the word:\n");

     //checking of word if it includes spaces
     int m = 0;
     do
     {
       gets(word);
       for(int i = 0; i<strlen(word); i++)
       {
         if(word[i] == ' ')
         {
           m = 1;
           printf("Please enter the word without spaces:\n");
           break;
         }
         else
         m = 0;
       }
     }
     while( m == 1);
     return word;
 }

char *get_text()
{
   int max_size = 100;
   char *text = malloc(sizeof(char)* max_size);
   printf("Please enter the text:\n");
   gets(text);
   return text;
}

int number_symbol (char *word, char *text)
{
  int word_symbols = strlen(word);
  int text_symbols = strlen(text);

    //find number of symbol in the text
  for(int i = 0; i<text_symbols; i++)
     {
         int k = i;
         int j = 0;
         while(text[k] != ' ')
         {
             if (text [k] == word[j])
             {
                 k++;
                 j++;
                 if (text [k] == word[word_symbols - 1] && (text[k+1] == ' ' || text[k+1] == '\0'))
                 {
                      //printf("The word \"%s\" is symbol #%d\n", word, i+1);
                      return i+1;
                 }
             }
             else
             break;
         }
         i = k;

     }
     return -1;
}

void free_malloc (char *text, char *word)
{
	free(word);
	free(text);
}
