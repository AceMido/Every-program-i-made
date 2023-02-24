#include<stdio.h>
#include<cs50.h>
#include<string.h>



   int main(void){


      int numbs[]={4,2,21,3};
      printf("%p \n",numbs); //this point to the start of the array numbs//
      printf("%p \n",&numbs[0]); //this point to the location of the first index of the array//
      printf("%p \n",&numbs[1]); //this point to the location of the secound index of the array//
      printf("%i \n",*numbs); //this print the value of the first index//

   }