#include <stdio.h>
int main()
{ 
    int bilangan;
    printf("masukkan bilangan bulat:");
    scanf("%d", &bilangan);
    if (bilangan % 2 == 0)
    {
        printf("%d adalah bilangan bulat genap", bilangan);
    }
    else
    {
        printf("%d adalah bilangan bulat ganjil", bilangan);
    }
    return 0;
}