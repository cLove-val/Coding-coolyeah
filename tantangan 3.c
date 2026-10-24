#include <stdio.h>

int main()
{
    int nilai, jumlah = 0, banyak = 0;
    float rata_rata;

    do
    {
        printf("Masukkan nilai (-1 untuk berhenti): ");
        scanf("%d", &nilai);

        if (nilai != -1)
        {
            jumlah += nilai;
            banyak++;
        }

    } while (nilai != -1);

    rata_rata = (float)jumlah / banyak;

    printf("Rata-rata = %.2f\n", rata_rata);

    return 0;
}