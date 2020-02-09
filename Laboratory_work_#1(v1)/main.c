#include <stdio.h>
#include "fun.h"

 int main ()
 {
     //get word function
     char *word  = get_word();

     //get text function
     char *text = get_text();

     //if word exists get number of symbol in the text
     int res = number_symbol(word, text);

     if (res == -1)
     printf("The word \"%s\" doesn't exist in the text\n", word);

     else
     printf("The word \"%s\" is symbol #%d\n", word, res);
     
     //free heap
     free_malloc(text, word);

     return 0;

 }