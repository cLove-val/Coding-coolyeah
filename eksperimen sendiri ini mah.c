#include <stdio.h>
int main()
{
    float angka1;
    float angka2;
    float Hasil;

    printf("selamat datang di aplikasi pengurangan\n");
    printf("silahkan masukkan angka1 : ");
    scanf("%f",&angka1);
    printf("silahkan masukkan angka2 : ");
    scanf("%f",&angka2);

    Hasil = angka1-angka2;
    printf("Hasil pengurangannya adalah : %f", Hasil);

}