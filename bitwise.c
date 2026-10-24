#include <stdio.h> 
int main() 
{
    int a, b;
    printf("masukkan nilai a: ");
    scanf("%d", &a);
    printf("masukkan nilai b: ");
    scanf("%d", &b);
        printf(" a & b = %d\n", a & b);
        printf(" a | b = %d\n", a | b);
        printf(" a ^ b = %d\n", a ^ b);
        printf(" a << 1 = %d\n", a << 1);
        printf(" a >> 1 = %d\n", a >> 1);
        return 0;
}