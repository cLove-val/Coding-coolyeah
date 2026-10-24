#include <stdio.h>
int main() 
{ 
    float celsius,fahrenheit,reamur,kelvin;
    printf("masukkan suhu dalam celsius : ");
    scanf("%f",&celsius);

    fahrenheit = (celsius * 9/5) + 32;
    reamur = celsius * 4/5;
    kelvin = celsius + 273.15;
    printf("suhu dalam fahrenheit : %.2f\n",fahrenheit);
    printf("suhu dalam reamur : %.2f\n", reamur);
    printf("suhu dalam kelvin : %.2f\n", kelvin);
    return 0;
}