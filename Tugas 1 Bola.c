#include <stdio.h>

int main()
{
    float r = 7;
    float luas, volume;
    printf("Jari-Jari = %f cm\n", r);

    luas = 4 * 3.14 * r * r;

    printf("Luas permukaan = %f cm2\n", luas);

    volume = 4.0/3.0 * 3.14 * r * r * r;

    printf("Volume nya adalah = %f cm3", volume);

    return 0;
}