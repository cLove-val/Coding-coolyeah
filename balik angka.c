#include <stdio.h>
int main() 
{
    int balik = 0, digit, n;
    printf("masukkan angka: ");
    scanf("%d", &n);

        while(n > 0){
        digit = n % 10;
        balik = balik * 10 + digit;
        n = n/10;
}
    printf("angka yang dibalik: %d", balik);
    return 0;
}