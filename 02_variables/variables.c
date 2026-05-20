// Introduction to variables in C.

#include <stdio.h>

int main(void){
    // Create a variable
    int first_number;
    // Assign the value to a variable
    first_number = 100;

    // Create and initialize
    int second_number = 300;

    // Print values of variables
    printf("The first number is %d\n", first_number); // %d - conversion specifier

    // Print second number
    printf("The second number is %d\n", second_number);

    // Calculate the sum 
    int sum = first_number + second_number;

    printf("%d + %d = %d\n", first_number, second_number, sum);


    return 0;
}