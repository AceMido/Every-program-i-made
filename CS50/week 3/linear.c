#include<stdio.h>
#include<cs50.h>
#include<string.h>


   int main(void){

  string names[]={"ali","ahmed","ebrahim","mai","hesen"};
  string which=get_string("which one do u want? ");

for(int i=0 ; i<5 ; i++){

    if(strcmp(names[i] , which)==0 ){
        printf("found in %i steps \n",i+1);
        return 0;
    }
}
 printf("not found \n");
 return 1;



   }