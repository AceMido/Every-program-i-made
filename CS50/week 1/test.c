#include <cs50.h>
#include <stdio.h>
float discount(float price, int percent);

int main(void){

    float price= get_float("what is the regular price? ");
    int percent= get_int("percentage off:");
    float sale = discount(price,percent);
    printf("your price is:%.2f \n",sale);
}

float discount(float price, int percent){

    return price*(100-percent)/100;
}