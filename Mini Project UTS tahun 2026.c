#include <stdio.h>
#include <string.h>
#define MAX_BARANG 100 // maksimum jenis barang nya 
#define STOK_MINIMUM 5
long harga_barang[MAX_BARANG];
char nama_barang[MAX_BARANG][30];
char kode_barang[MAX_BARANG][15];
int stok_barang[MAX_BARANG];
int jumlah_barang = 0;
int total_masuk[MAX_BARANG];
int total_keluar[MAX_BARANG];
int main()
{
    int pilihan;
    do
    {
        printf("====Selamat Datang di aplikasi====\n");
        printf("     Sistem Persediaan Barang\n");
        printf("           Pens Mart\n");
        printf("==================================\n");
        printf("Silahkan pilih menu yang tersedia:\n");
        printf("1. Input Data Barang\n");
        printf("2. Tampilkan Data Barang\n");
        printf("3. input stok masuk\n");
        printf("4. input Stok keluar\n");
        printf("5. Tampilkan laporan stok barang\n");
        printf("6. Keluar\n");
        printf("Masukkan pilihan anda: ");
        scanf("%d", &pilihan);
        if (pilihan < 1 || pilihan > 6)
        {
            printf("Pilihan tidak valid. Silakan pilih menu yang tersedia.\n");
        }
        else if (pilihan == 1)
        {
            int jumlah_data; 
            int i = 0;
            printf("banyak jenis barang yang ingin diinput: \n");
            scanf("%d", &jumlah_data);
            if (jumlah_data <= 0 || jumlah_barang + jumlah_data > MAX_BARANG)
            {
                printf("jumlah tidak valid, sisa kapasitas : %d barang.\n", MAX_BARANG - jumlah_barang);
                continue;
            }
            for (i = 0; i < jumlah_data; i++)
            {
                int idx = jumlah_barang;
                printf("=== Data Barang ke-%d ===\n", idx + 1);
                printf("Masukkan Kode Barang :");
                scanf("%14s", kode_barang[idx]);
                printf("masukkan nama barang :");
                scanf(" %29[^\n]", nama_barang[idx]);
                do
                {
                    printf("Masukkan Harga Barang: ");
                    scanf("%ld", &harga_barang[idx]);
                    if (harga_barang[idx] <= 0)
                    {
                        printf("[Error] Harga harus lebih besar dari 0!\n");
                    }
                } while (harga_barang[idx] <= 0);
                do
                {
                    printf("Masukkan stok Awal :");
                    scanf("%d", &stok_barang[idx]);
                    if (stok_barang[idx] < 0)
                    {
                        printf("[Error] Stok Tidak Boleh Negatif!\n");
                    }
                } while (stok_barang[idx] < 0);
                jumlah_barang++;
                printf("\n");
            }
        }
        else if (pilihan == 2)
        {
            if (jumlah_barang == 0)
            {
                printf("Belum ada barang masuk\n");
            }
            else
            {
                printf("==== Data Barang ===\n");
                for (int i = 0; i < jumlah_barang; i++)
                {
                    printf("~~~ Barang ke-%d ~~~\n", i + 1);
                    printf("Nama Barang  = %s\n", nama_barang [i] );
                    printf("Kode Barang  =  %s\n", kode_barang [i]);
                    printf("Harga Barang =  %ld\n", harga_barang [i]);
                    printf("Stok Barang  =  %d\n", stok_barang [i]);
                }
            }
        }
            else if (pilihan == 3) //pilihan 3
            {
                char kode_cari[15];
                int indeks = -1;
                int stok_masuk;
                printf("Masukkan kode barang yang ingin ditambahkan stoknya: ");
                scanf("%14s", kode_cari);
                for (int i = 0; i < jumlah_barang; i++)
                {
                    if (strcmp(kode_barang[i], kode_cari) == 0)
                    {
                        indeks = i;
                        break;
                    }
                }
                if (indeks == -1)
                {
                    printf("barang tidak ditemukan!\n");
                    continue;
                }
                printf("Barang ditemukan!, silahkan Masukkan jumlah stok masuk: ");
                do
                {
                    scanf("%d", &stok_masuk);
                    if (stok_masuk <= 0)
                    {
                        printf("input tidak valid, silahkan masukkan jumlah stok masuk yang lebih besar dari 0.\n");
                    }
                } while (stok_masuk <= 0);
                stok_barang[indeks] = stok_barang[indeks] + stok_masuk;
                total_masuk[indeks] = total_masuk[indeks] + stok_masuk;
                printf("Stok barang berhasil di tambahkan.\n");
            }
            else if (pilihan == 4) // pilihan 4
            {
                char kode_cari[15];
                int indeks = -1;
                int stok_keluar;
                printf("masukkan kode barang yang ingin dikurangi stoknya: ");
                scanf("%14s", kode_cari);
                for (int i = 0; i < jumlah_barang; i++)
                {
                    if (strcmp(kode_barang[i], kode_cari) == 0)
                    {
                        indeks = i;
                        break;
                    }
                }
                if (indeks == -1)
                {
                    printf("barang tidak ditemukan!\n");
                    continue;
                }
                if (stok_barang[indeks] == 0)
                {
                    printf("stok barang habis, tidak dapat mengurangi stok barang\n");
                    continue;
                }
                printf("Barang ditemukan!, silahkan Masukkan jumlah stok keluar: ");
                do
                {
                    scanf("%d", &stok_keluar);
                    if (stok_keluar <= 0)
                    {
                        printf("input data tidak valid, silahkan masukkan jumlah stok keluar yang benar :\n");
                    }
                    else if (stok_keluar > stok_barang[indeks])
                    {
                        printf("stok barang tidak cukup, stok yang tersedia adalah %d\n", stok_barang[indeks]);
                    }
                } while (stok_keluar <= 0 || stok_keluar > stok_barang[indeks]);
                stok_barang[indeks] = stok_barang[indeks] - stok_keluar;
                total_keluar[indeks] = total_keluar[indeks] - stok_keluar;
                printf("Stok barang berhasil dikurangi.\n");
                if (stok_barang[indeks] == 0)
                {
                    printf("stok barang habis\n");
                }
                else if (stok_barang[indeks] <= STOK_MINIMUM)
                {
                    printf("Stok barang menipis\n");
                }
                else
                {
                    printf("stok barang masih aman\n");
                }
            }
            else if (pilihan == 5)
            {
                if (jumlah_barang == 0)
                {
                    printf("belum ada data barang\n");
                }
                else
                {
                        printf("### Laporan Barang ###\n");
                        printf("Banyak jenis barang:%d\n\n", jumlah_barang);
                        for (int i = 0; i < jumlah_barang; i++)
                        {
                            printf("~~~ barang ke-%d ~~~\n", i + 1);               
                            printf("Kode Barang : %s\n", kode_barang[i]);
                            printf("Nama Barang : %s\n", nama_barang[i]);
                            printf("Harga Barang: %ld\n", harga_barang[i]);
                            printf("Stok Barang : %d\n", stok_barang[i]);
                        
                            if (stok_barang[i] == 0)
                            {
                                printf("Stok Habis!\n");
                            }
                                else if (stok_barang[i] <= STOK_MINIMUM)
                            {
                                printf("Stok Menipis!\n");
                            }
                            else
                            {
                                printf("Stok Aman ;)\n");
                            }
                            printf("\n");
                        }
                    }
            }
    } while (pilihan != 6)
            ;
        printf("Terimakasih sudah menggunakan aplikasi ini\n");

        return 0;
}

