#include<stdio.h>
#include<cs50.h>
#include<string.h>


  int main(void){
    int n=50;
    int *c=&n;
    printf("%p\n",c);
    printf("%i\n",*c);


  }