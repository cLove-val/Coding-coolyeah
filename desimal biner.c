#include <stdio.h>
int main()
{
    int bil,hasil,sisa;
    int biner[30];
    int i = 0;
    printf("masukkan bilangan desimal:");
    scanf("%d", &bil);
    do
    {
        hasil = bil / 2;
        sisa = bil % 2;
        printf("%d / 2 = %d sisa %d\n", bil, hasil, sisa);
        biner[i] = sisa;
        i++;
        bil = hasil;
    } while (hasil > 0);
    printf("\nbilangan biner = ");
    for (i=i-1; i>=0; i--)
    {
        printf("%d", biner[i]);
    }
    return 0;
}
