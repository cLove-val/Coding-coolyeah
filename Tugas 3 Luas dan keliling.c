#include <stdio.h>
#define PI 3.14

    int main() {
        
        float keliling , luas ;
        float jari_jari ;
        printf("Masukkan jari-jari lingkaran : ");
        scanf("%f", &jari_jari);
        keliling = 2 * PI * jari_jari;
        luas = PI * jari_jari * jari_jari;
        printf("Keliling lingkaran dengan jari-jari %.2f cm = %.2f cm\n", jari_jari, keliling);
        printf("Luas lingkaran dengan jari-jari %.2f cm = %.2f cm²\n", jari_jari, luas);
        return 0;
    }