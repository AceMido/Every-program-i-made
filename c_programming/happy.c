#include<stdio.h>
#include<windows.h>

int main(){
    int all=110;
    //for 1st line
    for(int i=1;i<=all;i++)
    {
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






printf("\n");
system("pause");
}