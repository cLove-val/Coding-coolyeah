#include <stdio.h> 
int main() 
{
    int a,b,c,d;
    int x,y,hasil;
        printf("masukkan nilai a : ");
        scanf("%d",&a);
        printf("masukkan nilai b : ");
        scanf("%d",&b);
        printf("masukkan nilai c : ");
        scanf("%d",&c);
        printf("masukkan nilai d : ");
        scanf("%d",&d);
            x = (a > b) ? a : b;
            y = (c > d) ? c : d;
            hasil = (x > y) ? x : y;
            printf("nilai terbesar = %d\n", hasil);
            return 0;
}