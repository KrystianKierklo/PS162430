#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    float delta;
    printf("Podaj wspolczynnik a: \n");
    scanf("%f", &a);
    printf("Podaj wspolczynnik b: \n");
    scanf("%f", &b);
    printf("Podaj wspolczynnik c: \n");
    scanf("%f", &c);
    delta = b*b - 4*a*c;
    if(delta >= 0)
    {
       float x_1 = (-b - sqrt(delta))/ 2 * a;
       float x_2 = (-b + sqrt(delta))/ 2 * a;
       printf("\nRozwiazania wynosza: %f oraz %f", x_1, x_2);
    }
    else
    {
        printf("\nDelta ujemna- brak rozwiazan!");
    }
    return 0;
}
