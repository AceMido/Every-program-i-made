#include<stdio.h>
#include<stdlib.h>


    typedef struct node{
        int number;   // make a new data type which is node
        struct node *left; //a pointer points to the left of the root (like the tree in ur notebook)
        struct node *right; // same thing but right
      }node;

//void print_tree(node*root);//
int search(node*tree, int number);

  int main(){

      node *tree=NULL;  //for starters
      node *n=malloc(sizeof(node));  // make a new node that the tree points to it in the start

        if(n== NULL)
            return 1;
      n->number=2;
      n->left=NULL;
      n->right=NULL;
      tree=n; //tree points to the memory location saved by n(heap) so we can reuse n again

      n=malloc(sizeof(node));

        if(n==NULL)
          return 1;

      n->number=1;
      n->left=NULL;
      n->right=NULL;
      tree->left=n;  // make tree points to the left of the root which 1




      n=malloc(sizeof(node));

        if(n==NULL)
          return 1;

      n->number=3;
      n->left=NULL;
      n->right=NULL;
      tree->right=n;  // make tree points to the right of the root which 3

      //print_tree(tree);  //a function to print tree(which points to 2)


      search(tree,5);

  }



    /*void print_tree(node*root){

        if(root==NULL) //for safety
            return;

        print_tree(root->right);  // recursion which we send back a new parameter to print the right of 2 which is 3

        printf("%i \n",root->number);

        print_tree(root->left); // recursion which we send back a new parameter to print the left of 2 which is 1

        free(root); // to free the app

    } */






 int search(node*tree, int number){
    if(tree==NULL){
      printf("Not Found \n");
      return 1;
    }else if(number>tree->number){
      printf("Go Right \n");
      return search(tree->right,number);
    }else if(number<tree->number){
      printf("Go Left \n");
      return search(tree->left,number);
    }else{
      printf("Found \n");
      return 0;
    }
 }

