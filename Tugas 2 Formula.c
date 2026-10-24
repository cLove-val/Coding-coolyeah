#include <stdio.h>
int main() {
    float x, y , z;
    printf("Formula 1&25\n");
    printf("masukkan nilai x:");
    scanf("%f", &x);

    y = 3 * x * x + 6 * x + 9;
    z = 2 * y * y + 5 * x * x / 9 * y;
    printf("nilai y = %.2f\n", y);
    printf("nilai z = %.2f\n", z);
    return 0;
}