#include <stdio.h>
int main() {
    float Fahrenheit, Celsius;
    printf("masukkan suhu dalam Fahrenheit:");
    scanf("%f", &Fahrenheit);
    Celsius = (Fahrenheit - 32) * 5 / 9;
    printf("suhu dalam Celsius: %.1f\n", Celsius);
    return 0;
}