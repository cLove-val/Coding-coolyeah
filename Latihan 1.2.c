#include <stdio.h>
int main() { 
    int a = 25;
    int b = 7;
    int penjumlahan = a + b;
    int pengurangan = a - b;
    int perkalian = a * b;
    int pembagian = a / b;
    int sisa = a % b;

    printf("Hasil Penjumlahan = %d\n", penjumlahan);
    printf("Hasil Pengurangan = %d\n", pengurangan);
    printf("Hasil Perkalian = %d\n", perkalian);
    printf("Hasil Pembagian = %d\n",pembagian);
    printf("Sisa Pembagian = %d\n", sisa);

    return 0;
}   