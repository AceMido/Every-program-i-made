#include<cs50.h>
#include<stdio.h>
#include<string.h>

  int main(void){
     printf("Enter username: ");
     char name[20];
     scanf("%s",name);

     char password[10];
     printf("password: ");
     scanf("%s",password);

     char code[30];
     printf("whats my fav person? ");
     scanf("%s",code);

     if(strcmp(name,"mohamed")==0 &&strcmp(password,"282004")==0 && strcmp(code,"you")==0){
      printf("welcome %s \n",name);
     
















           }else{
      printf("go away'_' \n");
     }
  }