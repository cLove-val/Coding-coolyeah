#include <stdio.h> 
int main() 
{
    float r = 7;
    float t = 10;
    float PI = 3.14159;
    float volume, luas_permukaan;
    luas_permukaan = 2 * PI * r * (r + t);
    volume = PI * r * r * t;
    printf("Luas permukaan tabung: %.2f\n", luas_permukaan);
    printf("Volume tabung: %.2f\n", volume);
    return 0;
}
