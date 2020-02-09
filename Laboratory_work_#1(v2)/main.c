#include <stdio.h>
#include "fun.h"

 int main ()
 {
     char buff [100];
     char buff1 [100];

     //get word function
     char *word  = get_word(buff);

     //get text function
     char *text = get_text(buff1);

     //if word exists get number of symbol in the text
     int res = number_symbol(word, text);

     if (res == -1)
     printf("The word \"%s\" doesn't exist in the text\n", word);

     else
     printf("The word \"%s\" is symbol #%d\n", word, res);

     return 0;
 }