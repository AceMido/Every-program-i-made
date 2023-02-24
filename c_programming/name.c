#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){




        printf("text to upper case: ");
        char name[30];
        char dup;
        scanf("%s",&name);


        printf("uppercased: ");
        int i=0;
        
        
                 while(name[i])
                         {
                             dup=toupper(name[i]);
                             printf("%c", toupper(dup));
                             i=i+1;
                         }
    




}
