#include <stdio.h>

int main()
{
    int n, i, data;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Masukkan data %d: ", i);
        scanf("%d", &data);

        if (data < 0)
        {
            continue;
        }

        printf("Data = %d\n", data);
    }

    return 0;
}