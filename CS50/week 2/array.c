#include <stdio.h>
#include <cs50.h>


  int main (void){

    int length = get_int("how many scores? ");
    int scores[length];
    int result=0 ;
    for(int i=0 ; i < length ; i++){
        scores[i]=get_int("score: ");
        result += scores[i];

    }
    printf("average %f \n",result/(float) 3.0);

  }