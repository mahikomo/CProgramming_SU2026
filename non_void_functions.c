// PRACTICE WITH NON VOID FUNCTIONS
#include <stdio.h>

// function prototypes
double getTemperature(void); // returns double, takes nothing
double celsiusToFarenheit(double);
void describeTemperature(double fahrenheit_temp);

int main(void) {
    double temperature = getTemperature();
    double fahrenheit_temp = celsiusToFarenheit(temperature);
    
    printf("The temperature is %.2lf degrees Celsius \n", temperature);  // lf conversion specificer for int
    printf("The temperature is %.2lf degrees Fahrenheit \n", celsiusToFarenheit(temperature)); // call function instead of creating a new variable
    describeTemperature(fahrenheit_temp);


    // .2 = how many places in the double
    
    
    return 0;
}


double getTemperature(void){
    printf("Enter the temperature in Celsius: ");
    double temp;
    scanf("%lf", &temp);
    
    return temp;
    
    
    
}


double celsiusToFarenheit(double celsius_temp) {
    double fahrenheit_temp = celsius_temp * (9.0/5.0) + 32;

    return fahrenheit_temp;
}

void describeTemperature(double fahrenheit_temp){
    if (fahrenheit_temp >= 90) {
        puts("HOT!");
    }
    else if (fahrenheit_temp >= 70){
       
        puts("MODERATE!");
    
    }
    else if (fahrenheit_temp >= 40) {

            puts ("CHILLY!");
        
    }
    else {
        puts("COLD!");
    }
    }