/*

 Logical operator

    && - logical AND
    || - logical OR
    ! - logical NOT


HW Create a function named checkInput. The function takes 2 integers ->
Returns 1 if the 1st integer is divisible by the 2nd integer and by (second - 3) integer
Returns 2 if the 1st integer is divisible by the 2nd integer or by (second - 3) integer
Returns 3 if the 1st integer is not divisible by the 2nd integer nor by (second - 3) integer

then print message with if else statements at end

in the main call the function and print the appropriate message.

exam monday 


*/


#include <stdio.h>

int checkInput (int numA, int numB){

    if (numA % numB == 0 && numA % (numB - 3) == 0){

        return 1;

    }
    else if (numA % numB == 0 || numA % (numB - 3) == 0){

        return 2;

    }
    else{

        return 3;

    }
}


int main (void){

    int numA = 0;
    int numB = 0;
    int result;

    printf("Pick an integer: ");
    scanf("%d", &numA);
    printf("Pick an integer: ");
    scanf("%d", &numB);

    result = checkInput(numA, numB);
    
    if (result == 1) {
        printf("Divisible\n");
    } else if (result == 2) {
        printf("Divisible by just one\n");
    } else {
        printf("Not divisible by either\n");
    }





    return 0;
}

