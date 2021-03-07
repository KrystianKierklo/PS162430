#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    int wybor;
    printf("Podaj pierwsza liczbe: ");
    scanf("%f", &a);
    printf("Podaj druga liczbe: ");
    scanf("%f", &b);
    printf("\n\nDODAWANIE - wybierz 1\nODEJMOWANIE - wybierz 2\nMNOZENIE - wybierz 3 \nDZIELENIE - wybierz 4\n");
    scanf("%d", &wybor);
    switch(wybor)
    {
        case 1: printf("\nWynik dodawania to: %f", a + b ); break;
        case 2: printf("\nWynik odejmowania to: %f", a - b); break;
        case 3: printf("\nWynik mnozenia to: %f", a * b); break;
        case 4: printf("\nWynik dzielenia to: %f", a / b); break;
    }

    return 0;
}
