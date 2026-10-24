#include <stdio.h>
#include <math.h>
int main()
{ 
    float A,B,C,D;
    printf("masukkan A :");
    scanf("%f", &A);
    printf("masukkan B :");
    scanf("%f", &B);
    printf("masukkan C :");
    scanf("%f", &C);
        if (A==0)
        {
            printf("persamaan bukan persamaan kuadrat!\n");
        }
        else {
    D = B * B - 4 * A * C;
printf("Determinan = %.2f\n", D);
        if(D>0)
            {
                float x1,x2;
                x1 = (-B + sqrt(D))/ (2 * A);
                x2 = (-B - sqrt(D))/ (2 * A);
                printf("x1 =%.2f\n", x1);
                printf("x2 =%.2f\n", x2);
            }
        else if (D==0)
        {
                float x;
                x = -B/(2 * A);
                printf("x1 =%.2f\n", x);
                printf("x2 =%.2f\n", x);
        }
        else 
        {
            printf("akar tidak real.\n");
        }
    }
return 0;
}