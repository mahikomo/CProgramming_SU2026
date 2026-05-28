// Introduction to variables in C.

// 5.20 HW due Thurs add all 5 arithmetic operations to variables.c program

#include <stdio.h>

int main(void){

    // Create a variable
    int first_number;
    
    // Assign the value to a variable
    first_number = 100;

    // Create and initialize
    int second_number = 300;

    // Get the values from the keyboard
    printf("Enter the first integer");
    scanf("%d", &first_number); // & - Address operator only in scanf function
    
    printf("Enter the second integer");
    scanf("%d", &second_number); 

    // Print values of variables
    printf("The first number is %d\n", first_number); // %d - conversion specifier

    // Print second number
    printf("The second number is %d\n", second_number);

    // Calculate the sum 
    int sum = first_number + second_number;

    printf("%d + %d = %d\n", first_number, second_number, sum);


    return 0;
}