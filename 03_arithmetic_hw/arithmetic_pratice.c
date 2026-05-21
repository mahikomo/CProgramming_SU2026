/*
 * Homework 5.20.26 Mahi More
 * Dessert Menu
 * Arithmetic Pratice - 5 Operators
 */ 


#include <stdio.h>

        int main (void){

            int ice_cream = 5;
            int slice_of_cake = 5;
            int cookie = 3;
            int drink = 3;
            

//      Addition

        printf("A customer orders a cookie and a drink. How much do they pay?\n");
        printf("%d\n", cookie + drink);

//      Subtraction
        
        printf("Customer returns the drink.\n");
        printf("%d\n", cookie + drink - drink);

//      Multiplication

        printf("Customer buys 3 cookies\n");
        printf("%d\n", cookie * cookie);

//      Division

        printf("Customer gets a discount on cookie\n");
        printf("%d\n", cookie / cookie);


//      Remainder
        
        printf("Customer has $1 off drink coupon\n");
        printf("%d\n", ice_cream % drink);


        }