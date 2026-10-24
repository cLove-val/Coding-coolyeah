#include <stdio.h>

int main()
{
    int n, i, data, target;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    printf("Masukkan nilai target: ");
    scanf("%d", &target);

    for (i = 1; i <= n; i++)
    {
        printf("Masukkan data %d: ", i);
        scanf("%d", &data);

        if (data == target)
        {
            printf("Nilai %d ditemukan pada data ke-%d\n", target, i);
            break;
        }
        else if (i == n)
        {
            printf("Nilai %d tidak ditemukan dalam data\n", target);
        }
    }

    return 0;
}