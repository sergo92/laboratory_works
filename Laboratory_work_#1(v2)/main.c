#include <stdio.h>
#include "fun.h"

 int main ()
 {
     char word [100];
     char text [100];

     //get word function
     get_word(word);

     //get text function
     get_text(text);

     //if word exists get number of symbol in the text
     int res = number_symbol(word, text);

     if (res == -1)
     printf("The word \"%s\" doesn't exist in the text\n", word);

     else
     printf("The word \"%s\" is symbol #%d\n", word, res);

     return 0;
 }