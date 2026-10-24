#include <stdio.h> 
int main() {  
    float Celcius, Fahrenheit;
        Celcius = 100.00;

    Fahrenheit = (Celcius * 9 / 5) + 32;
    printf("Celcius = %.2f\n", Celcius);
    printf("Fahrenheit = %.2f\n", Fahrenheit);
    return 0;
}