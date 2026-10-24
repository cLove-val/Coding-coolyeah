#include <stdio.h>
int main() { 
    float h_cpu, h_ram, h_board;
    float harga_cpu, harga_ram, harga_board;
    float total_harga;
    float diskon_cpu, diskon_ram, diskon_board;

    h_cpu = 4530000;
    h_ram = 2796000;
    h_board = 4940000;

    diskon_cpu = h_cpu * 0.15;
    diskon_ram = h_ram * 0.08;
    diskon_board = h_board * 0.10;

    harga_cpu = h_cpu - diskon_cpu;
    harga_ram = h_ram - diskon_ram; 
    harga_board = h_board - diskon_board;
    total_harga = harga_cpu + harga_ram + harga_board;

    printf("diskon CPU = Rp %.2f\n", diskon_cpu);
    printf("diskon RAM = Rp %.2f\n", diskon_ram);   
    printf("diskon Board = Rp %.2f\n", diskon_board);
    printf("Harga CPU = Rp %.2f\n", harga_cpu);
    printf("Harga RAM = Rp %.2f\n", harga_ram);
    printf("Harga Board = Rp %.2f\n", harga_board);
    printf("Total Harga = Rp %.2f\n", total_harga); 
    return 0;
}