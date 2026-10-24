#include <stdio.h>
int main ()
{
    int digit,n,jumlah = 0;
    printf("masukkan digit : ");
    scanf("%d",&n);
    while(n>0)
    {
        digit = n % 10;
        jumlah += digit;
        n = n/10;
    }
    printf("jumlah digit = %d\n",jumlah);
return 0;
}