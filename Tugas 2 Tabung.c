#include <stdio.h>

int main()
{
    float r = 7;
    float t = 15;
    float luas_alas,luas_selimut,luas_permukaan,volume;

    luas_alas = 3.14 * r * r;
    luas_selimut = 2 * 3.14 * r * t;
    luas_permukaan = 2 * 3.14 * r * (r+t);
    volume = 3.14 * r * r * t;

    printf("luas alas nya adalah = %f cm2\n" , luas_alas);
    printf("luas selimut nya adalah = %f cm2\n ",luas_selimut);
    printf("luas permukaannya adalah = %f cm2\n ", luas_permukaan);
    printf("volume dari tabung adalah = %f cm3\n ", volume);
    printf("Terimakasih...");

    return 0;

}