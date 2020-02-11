#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fun.h"


void get_word(char *word)
{
     printf("Please enter the word:\n");

     //checking of word if it includes spaces
     int m = 0;
     do
     {
       gets(word);
       int symbol_number = strlen(word);
       if (symbol_number == 0)
       {
       	 m = 1;
       	 printf("Please enter the word:\n");
       }	 
       
       for(int i = 0; i<symbol_number; i++)
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
     
}

void get_text(char *text)
{
    int m = 0;
    do
    {
    	printf("Please enter the text:\n");
    	gets(text);
    	int symbol_number = strlen(text);
    	
    	if(symbol_number == 0)
    	m = 1;
    	
    	else
    	m = 0;	  
    }
    while (m == 1);
    
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
                 
                 if (text [k] == word[word_symbols - 1] && (text[k+1] == ' ' || text[k+1] == '\0' || text[k+1] == '.' || text[k+1] == ':' || text[k+1] == ',' || text[k+1] == ';'))
                 return i+1;
                 
             }
             else
             break;
         }
         i = k;
     }
     return -1;
}
