#include <stdio.h> 
int main() 
{
    int sisi = 10;
    int luas_permukaan , volume;
    luas_permukaan = 6 * sisi * sisi;
    volume = sisi * sisi * sisi;
    printf("Luas permukaan kubus: %d\n", luas_permukaan);
    printf("Volume kubus: %d\n", volume);
    return 0;
}
