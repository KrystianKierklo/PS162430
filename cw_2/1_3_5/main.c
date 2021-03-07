#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int wybor;
    printf("wybierz 1 jesli chcesz podac dlugosc podstawy i wysokosc: \n");
    printf("wybierz 2 jesli chcesz podac dlugosc wszystkich 3 bokow: \n");
    scanf("%d", &wybor);
    if(wybor == 1)
    {
        float podstawa, wysokosc;
        printf("Podaj dlugosc podstawy: ");
        scanf("%f", &podstawa);
        printf("Podaj dlugosc wysokosci: ");
        scanf("%f", &wysokosc);
        float pole;
        pole = 0.5 * podstawa * wysokosc;
        printf("\nPole trojkata wynosi:  %f", pole);
    }
    else
    {
        float bok_a, bok_b, bok_c;
        printf("Podaj dlugosc 1 boku: \n");
        scanf("%f", &bok_a);
        printf("Podaj dlugosc 2 boku: \n");
        scanf("%f", &bok_b);
        printf("Podaj dlugosc 3 boku: \n");
        scanf("%f", &bok_c);
        float pole_2, polowa_obwodu;
        polowa_obwodu = (bok_a + bok_b + bok_c)/2;
        pole_2 = sqrt(polowa_obwodu*(polowa_obwodu - bok_a)*(polowa_obwodu - bok_b)*(polowa_obwodu - bok_c));
        printf("\nPole trojakta wynosi:  %f", pole_2);
    }
return 0;
}
