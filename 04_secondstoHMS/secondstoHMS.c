/*
        The programs converts the given number of seconds to HMS.
        65 seconds -> 0 hours 1 minute 5 seconds
        3695 seconds -> 1 hour



// 1) hw YEARS TO MINUTES 

// 2) no class monday

// 3) practice hw due sunday

// read textbook & intro to functions and operations


*/


#include <stdio.h>



void secondsToHMS(int seconds) {
    int minutes = 0;
    int hours = 0;
    int remaining_minutes = 0;
    int remaining_seconds = 0;

     if (seconds < 0){
        puts("The seconds cannot be negative");

}



int main (void){

    int seconds = 0;
    
    // Get the number of seconds
    puts ("Enter the number of seconds");
    scanf("%d", &seconds);

    // Call the functions
    secondstoHMS(seconds);

    }
    
    // Calculate the number of minutes
    minutes = seconds / 60;
    remaining_seconds = seconds % 60; // seconds - (minutes * 60);

    // Calculate the numbers of hours
    hours = minutes / 60 ;
    remaining_minutes = minutes % 60;

    // Print the result
    printf("%d seconds is ", seconds);
    printf("%d hours and", hours);
    printf("%d minutes and %d seconds", minutes, remaining_seconds);



    return 0;


    }
