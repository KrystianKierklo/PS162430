#include <stdio.h>
#include <stdlib.h>

void foo(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main()
{
    int a,b;
    printf("Podaj pierwsza liczbe calkowita: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe calkowita: ");
    scanf("%d", &b);
    printf("Wartosc pierwszej zmiennej: %d\nWartosc drugiej zmiennej: %d", a, b);
    foo(&a,&b);
    printf("\nWartosc pierwszej zmiennej po zmianie: %d\nWartosc drugiej zmiennej po zmianie: %d", a, b);
    return 0;
}
