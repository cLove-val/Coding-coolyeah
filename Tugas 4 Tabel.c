#include <stdio.h> 
void main() 
{ 

    float h_cpu, h_ram, h_board; 
    float harga_cpu, harga_ram, harga_board;
    float total;
    h_cpu  =4530000;
    h_ram  =2795000; 
    h_board=4940000; 

        harga_cpu = h_cpu - h_cpu * 0,15;
        harga_ram = h_ram - h_ram * 0.08; 
        harga_board= h_board - h_board * 0.10;

printf("------------------------------------------------------------------------\n");
printf("NO | Nama barang | Harga Barang | Diskon | Harga Total\n");
printf("------------------------------------------------------------------------\n");
printf("1. | Intel Core  | %.0f         | 15%%   | Rp %.0f\n", h_cpu, harga_cpu);
printf("2. | RAM DDR5 16 | %.0f         | 8%%    | Rp %.0f\n", h_ram,harga_ram);
printf("3. | Asus MOBO   | %.0f         | 10%%   | Rp %.0f\n", h_board,harga_board);
printf("------------------------------------------------------------------------\n");

total = harga_cpu + harga_ram + harga_board;
printf("Total Harga yang harus dibayar = Rp %.0f\n", total);


}