#include <stdio.h> 
#include <string.h>
int main() 
{  
    char usn [20];
    char pw [20];
    printf("Masukkan username: ");
    scanf("%s", usn);
    printf("Masukkan password: ");
    scanf("%s", pw);
    if (strcmp(usn, "ufi") == 0 && strcmp(pw, "ayammalay") == 0)
    {
        printf("Login benar,silahkan masuk");
    }
    else 
    {
        printf("Login salah, silahkan cek kembali username dan password anda");
    }
    return 0;
}