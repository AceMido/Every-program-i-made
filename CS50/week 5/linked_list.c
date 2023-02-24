#include <stdio.h>
#include <stdlib.h>
        typedef struct node{
                    int number;
                    struct node*next;
}node;
 int main(){
        node*list=NULL;
        node*n=malloc(sizeof(node)); //make a node which points at a certain location with malloc
        if(n==NULL) //for safety
        return 1;
        n->number=1; //store 1 in the memory location of n
        n->next=NULL; //make n points to NULL
        list=n; //make list points to n which points to 1



       n=malloc(sizeof(node)); //make another node

       if(n==NULL){ //for safety
       free(list);
       return 1;
       }
       n->number=2; //make n store 2 in a certain memory location using malloc
       n->next=NULL; // make n points to NULL if its the end of the list ?
       list->next=n; //make next of list points to n

       n=malloc(sizeof(node));  // again another node
       if(n==NULL){  // for safety
              free(list->next); //to free the memory location of 2 before 1
              free(list);
              return 1;
       }
       n->number=3;
       n->next=NULL;
       list->next->next =n; //to make the pointer of the node 2 points to the memory location of 3

//to add a new node
       n=malloc(sizeof(node));
       if(n!=NULL){
              n->number=0;
              n->next=list; // to make the new node points to the start of the list before making list points to it
              list=n;
       }



       n=malloc(sizeof(node));
       if(n!=NULL){
              n->number=4;
              n->next=NULL;
              list->next->next->next->next=n;

       }
/*make a new node which points to list and the condition is tmp
not equal to NULL and the step is tmp points to
next(next is the next memory location)*/

       for(node*tmp=list ; tmp!=NULL ;tmp=tmp->next){
              printf("%i \n",tmp->number);
       }



/*
make a while loop to free list

*/

       while(list!=NULL){
              node * tmp=list->next ;  // make a new node which points to next
              free(list);
              list=tmp;
       }

 }