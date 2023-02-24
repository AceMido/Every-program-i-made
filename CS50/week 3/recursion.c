#include<cs50.h>
#include<string.h>
#include<stdio.h>

void rec(int n);

  int main (void){

    int height =get_int("height:");
    rec(height);

  }

  
   void rec(int n){


    if(n==0){
        return;
    }
    rec(n-1);
    for(int i =0 ; i<n ; i++){
        printf("#");
    }printf("\n");

   }