#include <stdio.h>
int main()
{
    int maksimum;
    int i, j;
    int prima;
    int jumlah = 0;
    int total = 0;
    printf("masukkan nilai maksimum: ");
    scanf("%d", &maksimum);
    printf("bilangan prima:");
    for (i=2; i<= maksimum; i++)
    {
        prima = 1;
        for (j = 2; j < i; j++)
        {
        if (i % j == 0)
            {
                prima = 0;
                break;
            
            }
        }
    if (prima == 1)
    {
        printf("%d ", i);
        jumlah++;
        total += i;
    }
}
    printf("\nJumlah bilangan prima = %d", jumlah);
    printf("\nJumlah seluruh bilangan prima = %d", total);

    return 0;
}