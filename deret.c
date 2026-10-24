#include <stdio.h>
#include <math.h>
int main()
{
    int i,n;
    printf("masukkan jumlah suku:");
    scanf("%d", &n);
    printf("\nderet 2^n:\n");
    for (i=1; i<= n; i++)
    {
        printf("%5.0f", pow(2,i));
    }
    printf("\nderet n^2:\n");
    for (i=1; i<= n; i++)
    {
        printf("%5.0f", pow(i, 2));
    }
    printf("\nderet n^3:\n");
    for (i=1; i<= n; i++)
    {
        printf("%5.0f", pow(i,3));
    }
    return 0;
}
