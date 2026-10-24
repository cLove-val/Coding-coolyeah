#include <stdio.h>
int main() {
    
 int 
 nilai, percobaan = 1;
 printf("Masukkan nilai 0-100: ");
 scanf("%d", &nilai);
 while (nilai < 0 || nilai > 100) {
 printf("Nilai tidak valid. Masukkan lagi: ");
 scanf("%d", &nilai);
 percobaan++;
 }
 printf("Nilai diterima = %d\n", nilai);
 return 0;
}