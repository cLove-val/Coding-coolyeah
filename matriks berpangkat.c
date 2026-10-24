#include <stdio.h>
#include <math.h>
int main()
{
    int kolom,baris;
    int i,j;
    printf("masukkan jumlah baris:");
    scanf("%d", &baris);
    printf("masukkan jumlah kolom:");
    scanf("%d", &kolom);

    for(i=1; i<= baris; i++)
    {
        for(j=1; j<= kolom; j++)
        {
            printf("%5.0f ",pow (j, i));
        }
        printf("\n");
    }
    return 0;
}