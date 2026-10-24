#include <stdio.h>

int main()
{
    float r = 7;
    float t = 24;
    float s = 25;
    float luas_alas,luas_permukaan,luas_selimut,volume;

    printf("Program Perhitungan Kerucut \n");

    printf("Jari-Jari= %f cm\n ", r);
    printf("Tinggi= %f cm\n", t);
    printf("Garis Pelukis= %f cm\n", s);

    luas_alas = 3.14 * r * r;
    luas_permukaan = 3.14 * r * (r+s);
    luas_selimut = 3.14 * r * s;
    volume = 1.0/3.0 * 3.14 * r * r * t;

    printf("Luas alas adalah = %f cm2\n", luas_alas);
    printf("Luas permukaannya adalah = %f cm2\n", luas_permukaan);
    printf("Luas Selimutnya adalah = %f cm2\n", luas_selimut);
    printf("Volumenya adalah = %f cm3\n", volume);

}