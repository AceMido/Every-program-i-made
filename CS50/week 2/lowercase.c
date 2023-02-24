#include<cs50.h>
#include<stdio.h>
#include<string.h>


 int main (void){

   string n =get_string("before: ");
   printf("after: ");
   for(int i=0 ; i<strlen(n) ; i++){
    if(n[i]>= 'A' && n[i]<= 'Z'){

        printf("%c", n[i]+32);
    }else{

        printf("%c",n[i]);
    }


   }

 printf("\n");
 }