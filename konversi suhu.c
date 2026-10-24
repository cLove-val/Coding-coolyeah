#include <stdio.h> 
int main() 
{
    float celsius = 30;
    float fahrenheit;
    fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
    return 0;
}