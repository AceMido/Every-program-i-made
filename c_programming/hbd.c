#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<ctype.h>

void purple(void);

void blue(void);

void red(void);

void green(void);

void reset(void);

void lines(int line_number,int number_of_chars,int number_of_spaces_at_the_start);

void ready();

void hbd();

void sama();

void heart();
/*
 
**                   **                   ***************************                    ********************
**                   **                   ***                      ***                   **                  **
**                   **                   ***                      ***                   **                    **
**                   **                   ***                      ***                   **                     **
***********************                   **************************                     **                      **  
***********************                   ***                                            **                     **
**                   **                   **************************                     **                    **
**                   **                   ***                      ***                   **                   **
**                   **      *****        ***                      ***      *****        **                  **
**                   **      *****        ***                      ***      *****        **                 **             
**                   **      *****        **************************        *****        ******************* 
 
 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
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





int main(void){
    what2:
    printf("GUESS WHAT? (type w to continue) : ");
    char what[2];
    
    scanf("%s",&what);





   if(strcmp("W",what)==0||strcmp("w",what)==0){
    sleep(3);
    printf("today is a special day isnt it ? :) \n");
    sleep(4);
    printf("18 years ago, an angel was born straight from heaven \n");
    sleep(4);
    printf("and guess what, she become my one and only love <3 \n");
    sleep(4);
    printf("i wish that u fulfil ur dreams and live a happy life ever after \n");
    sleep(4);
    
   
    ready();
    system("cls");
    purple();
    hbd();
    printf("\n\n\n");
    blue();
    sama();



printf("\n\n\n\n");
red();
heart();
reset();
printf("\n\n\n");
sleep(4);
printf("ayoo,everyone is carbon and you are francium to me <3 \n");
sleep(5);
printf("i guess u didnt get it , francium is the most expensive element on earth (1 billion $ per gram) and carbon is one of the least expensive one (hehe,sorry i am a nerd) \n");
sleep(5);
printf("PLEASE NOTE: I AM NOT TALKING ABOUT THE TOXICITY ONLY THE **VALUEEEE** ,I HOPE U GET THAT \n");
printf("(because francium is very toxic and u r not toxic)\n");
sleep(8);
printf("u deserve more than that (sorry for hyping u up for no reason) \n") ;
sleep(4);
printf("and oh yeah ,i promise that i will continue loving you until the end of time or my death and i promise that i will try my best to make ur life happier <3 \n");
sleep(4);
printf("bye bye <3 \n");
sleep(3);
system("pause");
    } //end ifstatement
    else{
        printf("invalid input \n");
        goto what2;
    }
}



void ready(){
     printf("get ready in ");
    for(int i=10; i>=0;i--){
    printf(" %i",i);
    sleep(1);
   }
   printf("\nmaximize the window \n\n");
   sleep(5);
            for(int i=0;i<500;i++){
          for(int z=32;z<127;z++){
            usleep(100);
            green();
        printf(" %i",z*i);
    }
            }
      
}



void hbd(){
int all=110;
    //for 1st line
    for(int i=1;i<=all;i++)
    {
        usleep(5000);
        if(i>=1&&i<=2||i>=23&&i<=24||i>=44&&i<=70||i>=91)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
printf("\n");

all+=2;
int finald=110;
int h_start=1;
int h_end=2;
int b_start=44;
int b_end=46;
int b_start2=69;
int b_end2=71;
//for the rest
//f me it works but i forgot how lmao hehe
  for(int x=1;x<=10;x++)
  {
    usleep(5000);
    if(x==4||x==5){
        if(x==4){
            b_end=69;
            
        }else{
            b_end=46;
            b_start2=0;
            b_end2=0;
        }
        h_end=24;
    }
    if(x>5){
        if(x==6 ||x==10){
            b_end=69;
            b_start2=0;
            b_end2=0;
        }else if(x>=7&&x<=9){
            b_end=46;
            b_start2=69;
            b_end2=71;
        }
        if(x==10){
            all=109;
            finald=91;
        }
        h_start=1;
        h_end=2;
    }
       for(int i=1;i<=all;i++)
        {
            usleep(5000);
            if( i>=h_start && i<=h_end ||i>=23 && i<=24 || i>=b_start&&i<=b_end || i>=b_start2 &&i<=b_end2 || i>=91&&i<=92 || i>=finald&&i<=all)
             {
                 printf("*");
             }
             else
             {
                 printf(" ");
             }
          }
          if(x<4){
          finald+=2;
           all+=2;
          }else{
            finald-=2;
             all-=2;
          }
         
          printf("\n");
  }

}



void sama(){
    //first line of s, a , m , a
for(int i=1; i<=133;i++){
    usleep(5000);
    printf(" ");
    if( (i>=2) && (i<=15)  ||  i==40||i==41|| i==76||i==77 || i==101 || i==102 ||i==132 || i==133){
        printf("*");
    }
}
printf("\n");




//second line of s,a,m,a
for(int i=1;i<=129;i++){
    usleep(5000);
    printf(" ");
    if( (i>=2) &&(i<=15) ||  i==37 || i==38 ||i==42 || i==43 || i==71 || i==72 ||i==75 || i==76 || i==94 ||i==95 || i==98 || i==99 || i==123 || i==124 ||i==128 ||i==129)
    {
        printf("*");
    }
}
printf("\n");


//print 3rd line of s,a,m,a
for(int i=1;i<=131;i++){
    usleep(5000);
    printf(" ");

    if( (i>=2) &&(i<=15) ||  i==35 || i==36 ||i==44 || i==45 || i==69 || i==70 ||i==77 || i==78 || i==92 ||i==93 || i==100 || i==101 || i==121 || i==122 ||i==130 ||i==131)
    {
        printf("*");
    }

}
printf("\n");




//print 4th line of s,a ,m, a
for(int i=1;i<=144;i++){
    usleep(5000);
    printf(" ");

    if( (i>=2) &&(i<=4) ||  i==44 || i==45 ||i==57 || i==58 || i==78 ||i==79 || i==90 ||i==91 || i==101 || i==102 || i==113 || i==114 ||i==130 ||i==131 ||i==143||i==144)
    {
        printf("*");
    }

}
printf("\n");


//print 5th line of s,a ,m, a
for(int i=1;i<=131;i++){
    usleep(5000);
    printf(" ");

    if( (i>=2) &&(i<=4) ||  i>=43 && i<=53 || i==69 ||i==70 || i==85||i==86 || i==92 || i==93 || i==108 ||i==109 ||i>=121 &&i<=131)
    {
        printf("*");
    }

}

printf("\n");
//print 6th line of s,a ,m, a
for(int i=1;i<=117;i++){
    usleep(5000);
    printf(" ");

    if( (i>=2) &&(i<=15) ||  i>=31 && i<=42 || i==55 ||i==56 || i>=73 && i<=77 || i==96 ||i==97 ||i>=106 &&i<=117)
    {
        printf("*");
    }

}
printf("\n");

//print 7th line of s,a ,m, a
for(int i=1;i<=137;i++){
    usleep(5000);
    printf(" ");

    if( (i>=2) &&(i<=15) ||  i==29 || i==30 ||i==51 || i==52 || i==62 || i==63 || i>=83 &&i<=85 || i==107 || i==108 || i==115 || i==116 || i==136 || i==137)
    {
        printf("*");
    }

}
printf("\n");

//print the 8th,9th line of s,a,m,a
for(int z=0; z<2; z++){
for(int i=1;i<=155;i++){
    usleep(5000);
    printf(" ");

    if( i>=24 && i<=26 || i==40 || i==41 || i==62 || i==63 || i==133 || i==134 || i==154 || i==155)
    {
        printf("*");
    }

}
printf("\n");
}

//print the final two lines
for(int z=0 ; z<2 ; z++){
for(int i=0; i<=143; i++){
    usleep(5000);
    printf(" ");
    if(i>=1 && i<=14 || i==28 ||i==29 ||i==50 ||i==51||i==121||i==122||i==142||i==143){
        printf("*");
    }
}
printf("\n");
}
}



void heart(){

        /*
         
         
                                                          61*******    11     *******       
                                                       58***********    9    ***********     
                                                     57 *************   7   *************    
                                                     56***************  5  ***************   
                                                    55***************** 3 *****************  
                                                   54*******************1******************* 
                                                   54*******************1******************* 
                                                  53*****************************************
                                                  53*****************************************
                                                  53*****************************************
                                                   54***************************************
                                                    55*************************************
                                                     56***********************************
                                                      57*********************************
                                                       58*******************************
                                                        59*****************************
                                                         60***************************
                                                          61*************************
                                                           62***********************
                                                            63*********************
                                                             64*******************
                                                              65*****************
                                                               66***************
                                                                67*************
                                                                 68***********
                                                                  69*********
                                                                   70*******
                                                                    71*****
                                                                     72***
        */

//first line
for(int i=1; i<=86;i++){
    usleep(5000);
    if(i>=61 &&i<=68 || i>=79 && i<=86){
        printf("*");
    }else{
    printf(" ");
    }
}

printf("\n");

//second line
for(int i=1;i<=89;i++){
 usleep(5000);
    if(i>=58 &&i<=69 || i>=78 &&i<=89){
        printf("*");
    }else{
       printf(" ");
        }
}


printf("\n");

//3rd line
for(int i=1;i<=90;i++){
 usleep(5000);
    if(i>=57 &&i<=70 || i>=77 &&i<=90){
        printf("*");
    }else{
       printf(" ");
        }
}

printf("\n");

//4th line
for(int i=1;i<=91;i++){
 usleep(5000);
    if(i>=56 &&i<=71 || i>=76 &&i<=91){
        printf("*");
    }else{
       printf(" ");
        }
}

printf("\n");

//5th line
for(int i=1;i<=92;i++){
    usleep(5000);
    if(i>=55 &&i<=72 || i>=75 &&i<=92){
        printf("*");
    }else{
       printf(" ");
        }
}

printf("\n");

//6th ,7th lines

for(int x=0; x<2;x++){
for(int i=1;i<=93;i++){
 usleep(5000);


    if(i>=54 &&i<73 || i>=74 &&i<=93){
        printf("*");
    }else{
       printf(" ");
        }
       

}
printf("\n");
}

int number_of_chars=94; //total number of chars at the current line(line num 8)
int number_of_spaces_at_the_start=53; //from its name dummy
for(int line_number=8;line_number<=29;line_number++){
    //send w for the lines starting from 8 to 29,
lines(line_number,number_of_chars,number_of_spaces_at_the_start);
number_of_chars--; //decrement the total of chars by 1 as its written in the top comment  
number_of_spaces_at_the_start++; //increment the total space before printing the stars

}

printf("\n");

}
//line 8 to 29 in heart
void lines(int line_number,int number_of_chars,int number_of_spaces_at_the_start){

    //make a for loop start from 0 to number of chars at the current line
    for(int i=0;i<=number_of_chars;i++){
        /*
        if i is more than or equal to number of spaces at the start of the line (ex 53) and less than the number of 
        all chars of the line(ex 94)
         it will print a star else print some space
        */
       usleep(5000);
        if(i>=number_of_spaces_at_the_start && i<=number_of_chars  ){
            printf("*");
        }else{
            printf(" ");
        }
        
    }   
        printf("\n");
        
 
}         



void purple(void){
        printf("\033[0;35m");
    }



void blue(void){
        printf("\033[0;34m");
    }



void red(void){
        printf("\033[1;31m");
    }



void reset(void){
        printf("\033[1;37m");
    }



void green(void){
        printf("\033[0;32m");
    }