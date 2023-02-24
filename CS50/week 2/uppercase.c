#include <stdio.h>
#include <cs50.h>
#include<string.h>


  int main (void){

   string n=get_string("before: ");
   printf("after: ");
   for(int i=0 ; i<strlen(n); i++){

       if(n[i]>= 'A' && n[i]< 'a'){
       printf("%c", n[i]);

     }else{
      printf("%c",n[i]-32);

     }
   }

 printf("\n");
  }

