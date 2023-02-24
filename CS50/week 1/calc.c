#include <cs50.h>
#include <stdio.h>

  int main(void){

     long num1 = get_long("X= ");
     long num2 = get_long("Y= ");
     printf("result=%li \n",num1+num2);
  }