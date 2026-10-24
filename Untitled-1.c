#include <stdio.h>

int main ()
{
    float r = 10;
    float luas, volume;

    luas = 4 * 3.14 * r * r;
    
    printf("Luas perumukaan = %f",luas);

    volume = 4.0/3.0 * 3.14 * r * r * r;
    printf("Volume nya adalah = %f", volume);

    return 0;
}