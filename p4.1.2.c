#include <stdio.h>
int main()
{ 
    char karakter;
    printf("masukkan karakter:");
    scanf("%c", &karakter);
    if (karakter >= 'a' && karakter <= 'z')
    {
        printf("karakter yang anda masukkan adalah huruf kecil");
    }
    else if (karakter >= 'A' && karakter <= 'Z')
    {
        printf("karakter yang anda masukkan adalah huruf besar");
    }
    else if (karakter >= '0' && karakter <= '9')
    {
        printf("karakter yang anda masukkan adalah angka");
    }
    else
    {
        printf("karakter yang anda masukkan adalah karakter khusus");
    }
    return 0;
}