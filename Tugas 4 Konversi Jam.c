#include <stdio.h>
int main() {
    int jam , menit ;
    printf("Program konversi jam ke menit\n");
    printf("Masukkan jam dan menit (jj:mm) = ");
    scanf("%d:%d",&jam, &menit);
menit = (jam *60) + menit;
printf("jam %d = %d menit", jam, menit);
return 0;
}