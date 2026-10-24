#include <stdio.h>

int main()
{
    int n, i;
    float data, jumlah = 0, minimum, maksimum, rata_rata;
    printf("Masukkan jumlah nilai: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Masukkan nilai %d: ", i);
        scanf("%f", &data);
        jumlah += data;
        if (i == 1)
        {
            minimum = data;
            maksimum = data;
        }
        else
        {
            if (data < minimum)
                minimum = data;
            if (data > maksimum)
                maksimum = data;
        }
    }
    rata_rata = jumlah / n;
    printf("Rata-rata = %.1f\n", rata_rata);
    printf("Maksimum = %.1f\n", maksimum);
    printf("Minimum = %.1f\n", minimum);
    return 0;
}