#include <stdio.h>
int main()
{
    int i;
    int faktorial = 1;
    for(i=1;i<=10;i++)
    {
        faktorial = faktorial * i;
        printf("%d! = %d\n", i, faktorial);

    }
    return 0;
}