      #include<stdio.h>
      #include<stdlib.h>
      #include<windows.h>
      
      
      int main()
{
      int x[3]={4,21,3};
     
      for(int i=0;i<sizeof(x);i++){
             int tmp=0;
            if (i<(sizeof(x)-1) && x[i+1]>x[i])
            {
                  tmp=x[i];
                  x[i]=x[i+1];
                  x[i+1]=tmp;
      
            }
            
      }
      for(int i=0;i<3;i++){
            printf("%i ",x[i]);
      }
system("pause");
}