#include <stdio.h> 

void garis()
            {
            
            for(int i = 0; i <70; i++)
            {
                printf("%c",196);
            }
            printf("\n");
        }
int main() 
{ 
    float h_cpu, h_ram, h_board; 
    float harga_cpu, harga_ram, harga_board;
    float total;

    h_cpu  =4530000;
    h_ram  =2795000; 
    h_board=4940000; 

        harga_cpu = h_cpu - h_cpu * 0.15;
        harga_ram = h_ram - h_ram * 0.08; 
        harga_board= h_board - h_board * 0.10;

    garis();
    printf("|No | Nama Barang | Harga Barang | Diskon | Harga Setelah Diskon |\n");
    garis();
    printf("| 1 | CPU         | Rp %.0f     | 15%%    | Rp %.0f             |\n", h_cpu, harga_cpu);
    printf("| 2 | RAM         | Rp %.0f     | 8%%     | Rp %.0f             |\n", h_ram, harga_ram);
    printf("| 3 | Motherboard | Rp %.0f     | 10%%    | Rp %.0f             |\n", h_board, harga_board);
    garis();

total = harga_cpu + harga_ram + harga_board;
printf("Total Harga yang harus dibayar = Rp %.0f\n", total);


}