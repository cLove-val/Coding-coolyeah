#include <stdio.h>
int main()
{ 
    int tahun;
    printf("masukkan tahun (1900-2400):");
    scanf("%d", &tahun);
    if (tahun <1900 || tahun >2400)
    printf("tahun tidak valid.\n");
    else if (tahun %400 == 0)
    printf("%d adalah tahun kabisat.\n", tahun);
    else if (tahun %4 == 0 && tahun % 100 !=0)
    printf("%d adalah tahun kabisat.\n", tahun);
    else
    printf("%d bukan tahun kabisat.\n", tahun);
    return 0;
}