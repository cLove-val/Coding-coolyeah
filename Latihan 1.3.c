#include <stdio.h>
int main() { 
    int panjang = 15;
    int lebar = 8;
    int luas;
    int keliling;

    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);
    printf("Luas = %d cm²\n", luas);
    printf("Keliling = %d cm\n", keliling);
    return 0;
}   