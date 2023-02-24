#include<stdlib.h>
#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>



   int main (void){

    char *s=get_string("s: ");
    char *x=malloc(strlen(s)+1);
    if(x== NULL ){
        return 1;
    }
    strcpy(s,x);


   x[0]=toupper(x[0]);
   printf("s: %s\n", s);
   printf("x: %s \n", x);
   free(x);
   }
