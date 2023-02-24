#include<stdio.h>


        int main(){
int num,c,tmp=0;
  
    for(num=2; num<=100 ; num++){
        for(c=1;c<=num; c++){
            if(num%c==0){
                tmp++;
            }
        }
            if(tmp==2){
            printf("%i is prime \n",num);
            tmp=0;
        }else{
            printf("%i isnt prime \n",num);
            tmp=0;
        }
       
    }
   
 getch();
}


        