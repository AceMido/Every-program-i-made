#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>






int xnew(int z){
        
         int x=0;

        printf("Enter your new email: ");
        char *email[20];
        scanf("%s",&email);
        x++;

        printf("Enter your new password: ");
        char *password[20];
        scanf("%s",&password);
    
        x++;
     

        printf("Enter your phone number: ");
        int number;
        scanf("%i",&number);
        x++;

        FILE *user_cred;
        user_cred=fopen("user credentials.txt","a");
        fprintf(user_cred,"email,password,phone number \n");
        fprintf(user_cred,"%s,%s,%i \n",email,password,number);
        fclose(user_cred);
     

        if(x==3){
            return 0;
        }else{
            return 1;
        }


}   


int main(void){
            login:

            printf("are you an existing user ? ");
            char choice[3];
            scanf("%s",&choice);
            int i;
            char dup[3];
            for(int i=0;i<=strlen(dup);i++){
                dup[i]=toupper(choice[i]);
            }
           

            if(strcmp(dup,"NO")==0 || strcmp(dup,"N")==0){
               int z= xnew(z);
               if(z==1){
                return 1;
               }
                
                goto login;
            }else if (strcmp(dup,"YES")==0 || strcmp(dup,"Y")==0)
            {

                printf("Enter your email: ");
                char email[30];
                scanf("%s",&email);
             

                printf("Enter your password: ");
                char password[30];
                scanf("%s",&password);
                char emaildup[30];
                char passdup[30];


                FILE *user_cred;
                user_cred=fopen("user credentials.txt","r");
                fscanf(user_cred,"%s , %s",emaildup,passdup);
                int x=0;
                while(true){
                    if(email[x]==emaildup[x] && password[x]==passdup[x]){
                        break;
                    }else{
                        printf("wrong email or password ,try again");
                        goto login;
                    }
                }
                printf("welcome \n ");
                fclose(user_cred);
            }
            

            



}


