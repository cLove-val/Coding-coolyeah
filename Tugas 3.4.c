#include <stdio.h> 
int main() 
{  
    int nilai;
    printf("masukkan nilai: ");
    scanf("%d", &nilai);
        if (nilai >= 85)
        {
            printf("grade A\n");
        }
                else if (nilai >=75)
                {
                    printf("grade B\n");
                }
                else if (nilai >=65)
                {
                    printf("grade C\n");
                }
                else if (nilai >=50)
                {
                    printf("grade D\n");
                }
                else
                {
                    printf("grade E\n");
                }
                return 0;
}