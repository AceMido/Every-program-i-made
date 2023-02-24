#include<stdio.h>
#include<cs50.h>

 int main(void){
     int count;
     do{
     count = get_int("count: ");
     }while(count<1);

     for(int i=0 ;  i<count ;  i++){
          for(int k=0 ; k<count ; k++){
           printf("#");

          }
        printf("\n");
        }

 }