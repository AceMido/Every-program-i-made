#include <cs50.h>
#include <stdio.h>

  int main(void){

   int x = get_int("the number= ");
   if(x % 2 == 0 ) {
     printf("x is even \n");
   }else if(x % 2 == 1){
    printf("x is odd \n");
   }else if(x == 0){
   printf("x is equal to zero \n");
   }



  }