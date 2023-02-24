#include<stdio.h>
#include<dos.h>

     
     /*
 
 **                   **           ***************************              ********************
 **                   **           ***                      ***             **                  **
 **                   **           ***                      ***             **                   **
 **                   **           ***                      ***             **                     **
 ***********************           **************************               **                     **  
 ***********************           ***                                      **                     **
 **                   **           **************************               **                    **
 **                   **           ***                      ***             **                   **
 **                   **           ***                      ***             **                  **
 **                   **           ***                      ***             **                 **             
 **                   **           **************************               ******************* 
 
 
                14                                                                                                   
 **************         24             **               34                 **       23              **          29                 **   
 **************         22           ** 3 **            29               ** 2**        19         ** 2**        25               ** 3 **
 **************         21          **  5  **           27              ** 4  **       17        **  4 **       23              ** 5   **
 ***                    31         **   7   **          25             **  6   **      15       **   6  **      21             **  7    **
 ***                    30        *****13******         23            **   8    **     13      **    8   **     19            *****13******
 **************         18       ******15*******        21           **   10     **    11     **    10    **    17           *****15********
 **************         17      **     13      **       19          **    12      **    9    **     12     **   15          **   13        **
            ***         16     **      16        **     16         **     14       **   7   **      14      **  13         **    15         **
            ***         15    **       18         **    14        **      16        **  5  **       16       ** 11        **     17          **
 **************         14   **        20          **   12       **       18         ** 3 **        18        **  9      **      19           **
 **************         13  **         22           **  10      **        20          ** **         20         **   7   **       21            **
 
*/

     
     
     
     
     
     
     int main (){
//print the first line of A
            printf("           ");
           for(int a=1; a<=1 ;a++){
                printf("  ");
                for(int b=1 ; b<=4 ; b++){
                    if(b>2){
                        printf("");
                        continue;
                    }
                    usleep(2000);
                    printf("*");
                }
            }
            printf("\n          ");

//to print the second line of A
            for(int a=1; a<=1 ;a++){
                usleep(2000);
                printf("**");
                for(int b=1 ; b<5 ;b++){
                if(b>=3){
                    usleep(2000);
                    printf("*");
                    continue;
                }
                printf("  ");
            }
            }
        printf("\n         ");

// to print the third line of A
        for(int a=1; a<=1 ;a++){
                usleep(2000);
                printf("**");
                for(int b=1 ; b<5 ;b++){
                if(b>=3){
                    usleep(2000);
                    printf("*");
                    continue;
                }
                printf("   ");
            }
            }
        printf("\n        ");

//to print the fourth line of A
        for(int a=1; a<=1 ;a++){
                usleep(2000);
                printf("**");
                for(int b=1 ; b<5 ;b++){
                if(b>=3){
                    usleep(2000);
                    printf("*");
                    continue;
                }
                printf("    ");
            }
            }
            printf("\n");
 
 //to print the fifth,sixth lines of A
            for(int a=1 ; a<=1; a++){
                for(int b=1;b<=29 ;b++){
                    if(b==1){
                        printf("       ");
                    }
                    if(b==14){
                        printf("\n      ");
                        continue;
                    }
                    if(b>14){
                        usleep(2000);
                        printf("*");
                        continue;
                    }
                    if(b<=13){
                    usleep(2000);
                    printf("*");
                    continue;
                    }
                }
            }
                printf("\n    ");
//to print the seventh line of A
            for(int a=1; a<=1 ;a++){
                usleep(2000);
                printf("**");
                for(int b=1 ; b<5 ;b++){
                if(b>=3){
                    usleep(2000);
                    printf("*");
                    continue;
                }
                printf("       ");
            }
            }
                printf("\n   ");

//to print the eighth line of A
                for(int a=1; a<=1 ;a++){
                usleep(2000);
                printf("**");
                for(int b=1 ; b<5 ;b++){
                if(b>=3){
                    usleep(2000);
                    printf("*");
                    continue;
                }
                printf("        ");
            }
            }

                printf("\n  ");

//to print the ninth line of A
                for(int a=1; a<=1 ;a++){
                usleep(1000);
                printf("**");
                for(int b=1 ; b<5 ;b++){
                if(b>=3){
                    usleep(2000);
                    printf("*");
                    continue;
                }
                printf("         ");
            }
            }

                printf("\n ");

//to print the tenth line of A
            for(int a=1; a<=1 ;a++){
                usleep(1000);
                printf("**");
                for(int b=1 ; b<5 ;b++){
                if(b>=3){
                    usleep(2000);
                    printf("*");
                    continue;
                }
                printf("          ");
            }
            }

                 printf("\n");

//to print the final line of A
                for(int a=1; a<=1 ;a++){
                usleep(2000);
                printf("**");
                for(int b=1 ; b<5 ;b++){
                if(b>=3){
                    usleep(2000);
                    printf("*");
                    continue;
                }
                printf("           ");
            }
            }

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
     }