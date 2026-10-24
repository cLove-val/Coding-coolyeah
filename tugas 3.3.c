#include <stdio.h> 
int main() 
{  
    int a;
    int b;
    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    printf("Masukkan nilai b: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("nilai terbesar adalah: %d\n", a);
    }
    else if (a < b) 
    {
        printf("nilai terbsesar adalah; %d\n", b);
    }
    else 
    {
        printf("nilai a dan b sama\n");
    }
    return 0;
}