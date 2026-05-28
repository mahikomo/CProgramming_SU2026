// online c complier to run c program online
#include <stdio.h>

// function prototypes - short descriptions of functions
void two(void);
void one_three(void);



void two(void){
    puts("two");

}

    void one_three(void){
    puts("one");
    two();
    puts("three");
    
}


int main() {

    puts("starting now: ");

    // function call
    one_three();
                                
    puts("done!");

    return 0;


}