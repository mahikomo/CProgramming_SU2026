/*

    Introduction to void functions in C.


*/


#include <stdio.h>


void printCourseWithNumber(int course_number){
    printf("You are in COP%d course", course_number);

}
// Function defintion
void printCourse(void){
    printf("You are in COP2271 course\n");
}
int main(void){ 
    // Call printCourse function

    printCourse(); 
    printCourse();

    int number = 1234;
    printCourseWithNumber(number);

    return 0;

}