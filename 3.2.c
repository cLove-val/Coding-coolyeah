#include <stdio.h> 
int main() 
{       
        int a = 6;     
        int b = -2; 
        printf("(a > 0) && (b > 0) = %d\n", (a > 0) && (b > 0));     
        printf("(a > 0) && (b < 0) = %d\n", (a > 0) && (b < 0));     
        printf("(a > 0) || (b < 0) = %d\n", (a > 0) || (b < 0));     
        printf("!(a > 0) = %d\n", !(a > 0)); 
    return 0; 
} 
