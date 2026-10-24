#include <stdio.h> 
int main() 
{
    float jarak =  150; // 150 km
    float waktu = 2.5; // 2.5 jam
    float kecepatan;

    kecepatan = jarak / waktu;
    printf("Kecepatan: %.2f km/jam\n", kecepatan);
    return 0;
}