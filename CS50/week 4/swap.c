#include<cs50.h>
#include<stdio.h>
 void swap(int *a,int *b);


  int main(void){

    int x=1;
    int y=2;


    swap(&x,&y);


    printf("%i \n",x);
    printf("%i \n",y);

  }

  void swap(int *a,int *b){
   int tmp=*a;
   *a=*b;
   *b=tmp;

  }