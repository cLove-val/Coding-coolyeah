#include <stdio.h>
int main()
{
    float jumlah_data,rata_rata,data,jumlah = 0;
    printf("masukkan jumlah data: ");
    scanf("%f",&jumlah_data);
    for(int i=0;i<jumlah_data;i++)
    {
        printf("masukkan data %d: ",i+1);
        scanf("%f",&data);
        jumlah+=data;
    }
    rata_rata=(float)jumlah/jumlah_data;
    printf("rata-rata: %.1f\n",rata_rata);
    printf("jumlah = %.1f",jumlah);
}