#include<stdio.h>
#include<dos.h>

/*
                14                                                                                                   
  12        **************         24             **               34                 **       23              **          29                 **   
  12        **************         22           ** 3 **            29               ** 2**        19         ** 2**        25               ** 3 **
  12        **************         21          **  5  **           27              ** 4  **       17        **  4 **       23              ** 5   **
  12        ***                    31         **   7   **          25             **  6   **      15       **   6  **      21             **  7    **
  12        ***                    30        *****13******         23            **   8    **     13      **    8   **     19            *****13******
  12        **************         18       ******15*******        21           **   10     **    11     **    10    **    17           *****15********
  12        **************         17      **     13      **       19          **    12      **    9    **     12     **   15          **   13        **
  23                   ***         16     **      16        **     16         **     14       **   7   **      14      **  13         **    15         **
  23                   ***         15    **       18         **    14        **      16        **  5  **       16       ** 11        **     17          **
  12        **************         14   **        20          **   12       **       18         ** 3 **        18        **  9      **      19           **
  12        **************         13  **         22           **  10      **        20          ** **         20         **   7   **       21            **
          
*/


  int main(){
//to print the first line of M
            printf("           ");
            for(int a=1 ; a<=1 ; a++ ){
                for(int b=0 ; b<4; b++){
                    if(b==2){
                        printf("                     ");
                    }
                    usleep(4000);
                    printf("*");
                }

            }
            
            printf("\n");

//to print the secound line of M
            printf("         ");
            for(int a=1; a<=29; a++){
                if(a==3 || a==4 || a>6 &&a<=23 ||a==26||a==27){
                    printf(" ");
                }else{
                usleep(4000);
                printf("*");
                }
                
            }

                printf("\n");

//to print the third line of M
            printf("        ");
            for(int a=1; a<=31; a++){
                if(a>=3 && a<=6 || a>8 && a<=23 || a>=26 &&a<=29){
                    printf(" ");
                }else{
                usleep(4000);
                printf("*");
                }
                
            }

            printf("\n");

//to print the fourth line of M
              printf("       ");
              for(int a=1; a<=33; a++){
                if(a>=3 && a<=8 || a>10 && a<=23 || a>=26 &&a<=31){
                    printf(" ");
                }else{
                usleep(4000);
                printf("*");
                }
                
            }            

            printf("\n");

//to print the sixth line of M
              printf("      ");
              for(int a=1; a<=35; a++){
                if(a>=3 && a<=10 || a>12 && a<=23 || a>=26 &&a<=33){
                    printf(" ");
                }else{
                usleep(4000);
                printf("*");
                }
                
            }            

            printf("\n");

//to print the seventh line of M
              printf("     ");
              for(int a=1; a<=37; a++){
                if(a>=3 && a<=12 || a>14 && a<=23 || a>=26 &&a<=35){
                    printf(" ");
                }else{
                usleep(4000);
                printf("*");
                }
                
            }

            printf("\n");

//to print the eighth line of M
              printf("    ");
              for(int a=1; a<=39; a++){
                if(a>=3 && a<=14 || a>16 && a<=23 || a>=26 &&a<=37){
                    printf(" ");
                }else{
                usleep(4000);
                printf("*");
                }
                
            }

            printf("\n");

//to print the ninth line of M
              printf("   ");
              for(int a=1; a<=41; a++){
                if(a>=3 && a<=16 || a>18 && a<=23 || a>=26 &&a<=39){
                    printf(" ");
                }else{
                usleep(4000);
                printf("*");
                }
                
            }

            printf("\n");

//to print the tenth line of M
              printf("  ");
              for(int a=1; a<=43; a++){
                if(a>=3 && a<=18 || a>20 && a<=23 || a>=26 &&a<=41){
                    printf(" ");
                }else{
                usleep(4000);
                printf("*");
                }
                
            }

            printf("\n");

//to print the final line of M
              printf(" ");
              for(int a=1; a<=45; a++){
                if(a>=3 && a<=20 || a>22 && a<=23 || a>=26 &&a<=43){
                    printf(" ");
                }else{
                usleep(4000);
                printf("*");
                }
                
            }

getch();
  }