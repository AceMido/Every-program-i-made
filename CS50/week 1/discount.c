#include <cs50.h>
#include <stdio.h>
float discount(float price, int percent);

int main (void){

   float regular= get_float("whats the original price? \n");
   int percent = get_int("Percentage off: ");
   float sale = discount(regular,percent);
   printf("sale price is %.2f \n",sale);

}

float discount(float price, int percent){


    return  price* (100-percent)/100;
}