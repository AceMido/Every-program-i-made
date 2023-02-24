#include<stdio.h>
#include<cs50.h>
#include<string.h>




   typedef struct{
      string names;
      string numbers;
      int age;


   }pb;


   int main(void){

    pb people[2];

    people[0].names="mohamed olwi";
    people[0].numbers="01021483383";
    people[0].age=18;

    people[1].names="joseph joestar";
    people[1].numbers="0103134233";
    people[1].age=17;

    string phonebook=get_string("who do u need? ");

    for(int i=0 ; i<2 ; i++){
    if(strcmp( people[i].names, phonebook)==0){
     printf("found his number: %s \n ",people[i].numbers);
      printf("his age: %i \n ",people[i].age);
     return 0;
    }

    }
     printf("he doesnt exist ,please try again");
     return 1;
    }



