#include <stdio.h>
int main()
{ 
    int accumulator;
    int bilangan;
    char operator;
    while(1)
    {
    scanf("%d %c", &bilangan,&operator);
    switch(operator)
    {
        case 's':
            accumulator = bilangan;
            break;
        case '+':
            accumulator = accumulator + bilangan;
            break;
        case '-':
            accumulator = accumulator - bilangan;
            break;
        case '*':
            accumulator = accumulator * bilangan;
            break;
        case '/':
            if (bilangan == 0)
            printf("pembagian dengan nol tidak diperbolehkan.\n");
            else 
            accumulator = accumulator / bilangan;
            break;
        case '%':
            if(bilangan == 0)
            printf("modulus dengan nol tidak diperbolehkan.\n");
            else
            accumulator = accumulator % bilangan;
            break;
        case '&':
            accumulator = accumulator & bilangan;
            break;
        case '|':
            accumulator = accumulator | bilangan;
            break;
        case 'e':
        return 0;
    }
    printf("= %d\n", accumulator);
}
}