#include <stdio.h>
#include<windows.h>
#include<unistd.h>
void lines(int line_number,int number_of_chars,int number_of_spaces_at_the_start);

int heart(){

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
system("pause");
}

//line 8 to 29
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