#include <stdio.h>
#include<string.h>


  int main(void){

     /*second string is mode
     modes: 
     r==>read(read data only)
     w==>write(add data and delete the saved one )
     a==>append(add data without deleting existed one)
      
     */
      FILE myfile=fopen("book.xlsx","r");
      printf(myfile);

  }