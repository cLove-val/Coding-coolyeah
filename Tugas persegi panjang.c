#include <stdio.h> 
int main() 
{
    float panjang = 15 , lebar = 8; 
    float luas, keliling;
    
    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);

    printf("Luas persegi panjang: %.2f\n", luas);
    printf("Keliling persegi panjang: %.2f\n", keliling);
    return 0;
}