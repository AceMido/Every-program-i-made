#include <stdio.h>
#include <stdlib.h>



 int main(){
     
    //if the size of list is more than the saved memory for it//
    if(list==NULL){
        return 1;
    }
  list[0]=1;
  list[1]=2;
  list[2]=3;

  //to resize it we use realloc to make a new array of extra size//
  int*tmp=realloc(list,4*sizeof(int));
  if(tmp==NULL){
    free(list);
    return 1;
  }

tmp[3]=4;
//so i can work again on list//
list=tmp;
for(int i=0; i<4 ;i++){
    printf("%i \n",list[i]);
}
//to free the memory before the application closes//
free(list);
 }