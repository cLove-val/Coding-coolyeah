#include <stdio.h> 
int main() 
{
    int a,b,c,d;
    printf("masukkan nilai a : ");
    scanf("%d",&a);
    printf("masukkan nilai b : ");
    scanf("%d",&b);
    printf("masukkan nilai c : ");
    scanf("%d",&c);
    printf("masukkan nilai d : ");
    scanf("%d",&d);
        
        printf("\nhasil a = %d\n", (a>b) && (c<d) || (a==b));
        printf("hasil b = %d\n", (a==b) || (c==d) && (a<b));
        printf("hasil c = %d\n", (a<=c) && (b>=d) || (a==d));
        printf("hasil d = %d\n", (a!=b) || (c>d) ||  (a!=d));
        return 0;
}
