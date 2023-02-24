#include<stdio.h>
#include<windows.h>

        int main(){
                int s,m,h;
                printf("seconds: ");
                scanf("%i",&s);

                printf("minutes: ");
                scanf("%i",&m);

                printf("hours: ");
                scanf("%i",&h);

                while(1){
               
                    s++;
                    if(s>59){
                        m++;
                        s=0;
                    }
                    if(m>59){
                        h++;
                        m=0;
                    }
                    if(h>12){
                        h=0;
                    }
                    printf("%i h : %i m : %i s \n",h,m,s);
                    sleep(1);
                    system("cls");
          
                }
          

        }