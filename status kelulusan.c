#include <stdio.h> 
int main() 
{
    int teori,praktikum;

    printf("masukkan nilai teori :");
    scanf("%d", &teori);
    printf("masukkan nilai praktikum :");
    scanf("%d", &praktikum);
        printf("status kelulusan : %s\n", (teori >= 60 && praktikum >= 60) ? "Lulus" : "Tidak Lulus");
        return 0;
}