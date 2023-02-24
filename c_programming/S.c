#include<stdio.h>
#include<dos.h>


  int main(){
         
//to print the first two lines of S
            for(int s=1; s<=2; s++){
                if(s==2){
                    printf("\n");
                }
                for(int a=1; a<=22; a++){
                    usleep(1000);
                    printf("*");
                }
                
            }
            
            printf("\n");

//to print the third,fourth lines of S
            for(int s=1; s<=2 ;s++){
                if(s==2){
                    printf("\n");
                }
                for(int a=1 ; a<=3 ; a++){
                    usleep(1000);
                    printf("*");
                }
            }

            printf("\n");

//to print the fifth,sixth lines of S
             for(int s=1; s<=2; s++){
                if(s==2){
                    printf("\n");
                }
                for(int a=1; a<=22; a++){
                    usleep(1000);
                    printf("*");
                }
                
            }            

            printf("\n                      ");

 //to print the seventh,eighth lines of S
             for(int s=1; s<=3 ;s++){
                if(s==2 || s==3){
                    printf("\n                      ");
                }
                for(int a=1 ; a<=3 ; a++){
                    usleep(1000);
                    printf("*");
                }
            }          

            printf("\n");

//to print the final two lines of S
             for(int s=1; s<=2; s++){
                if(s==2){
                    printf("\n");
                }
                for(int a=1; a<=22; a++){
                    usleep(1000);
                    printf("*");
                }
                
            }   


  }