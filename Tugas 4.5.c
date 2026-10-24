#include <stdio.h>
int main()
{ 
        int pilihan;
        while(1)
        {
        printf("==program kesehatan badan==\n");
        printf("1. Kalkulator BMI\n");
        printf("2. Tekanan Darah\n");
        printf("3. Kebutuhan Air Minum\n");
        printf("4. Suhu Tubuh\n");
        printf("5. Keluar\n");
        printf("silahkan pilih menu\n");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
                case 1:
        {
        float tinggi,berat, bmi;
        printf("masukkan tinggi badan (cm):");
        scanf("%f", &tinggi);
        printf("masukkan berat badan (kg):");
        scanf("%f", &berat);

        tinggi = tinggi / 100;
    bmi = berat / (tinggi * tinggi);
        printf("BMI = %.2f\n", bmi);
        if (bmi < 18.5)
        printf("kondisi badan anda kurus\n");
        else if(bmi < 25)
        printf("kondisi badan anda normal\n");
        else if(bmi < 30)
        printf("anda kelebihan berat badan\n");
        else
        printf("kondisi badan anda obesitas\n");
                break; }
                case 2:
                {
        float sistolik, diastolik;
        printf("masukkan tekanan sistolik:");
        scanf("%f", &sistolik);
        printf("masukkan tekanan diastolik:");
        scanf("%f", &diastolik);
        if (sistolik < 90 || diastolik < 60)
                printf("tekanan darah rendah\n");
        else if (sistolik < 120 && diastolik < 80)
                printf("tekanan darah normal\n");
        else if (sistolik < 140 && diastolik < 90)
                printf("tekanan darah tinggi\n");
        else
                printf("tekanan darah sangat tinggi\n");
                break; }
                case 3:
                {
        float berat, air;
        printf("masukkan berat badan (kg):");
        scanf("%f", &berat);
    air = berat * 30;
        printf("kebutuhan air anda =%.0f ml per hari\n", air);
        break; }
                case 4:
                {
        float suhu;
        printf("masukkan suhu anda (celsius):");
        scanf("%f", &suhu);
        if (suhu < 36)
                printf("suhu tubuh anda rendah\n");
        else if (suhu <= 37.5)
                printf("suhu tubuh anda normal\n");
        else 
                printf("suhu tubuh anda tinggi\n");
                break; }
                case 5:
                printf("program selesai\n");
                return 0;
                default :
                printf("pilihan tidak valid\n");
                }
        }
        return 0;
}