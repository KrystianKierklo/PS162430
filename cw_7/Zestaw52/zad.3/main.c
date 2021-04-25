#include <stdio.h>
#include <stdlib.h>

double* foo()
{
    double *temp=malloc(2*sizeof(double));
    *(temp)= 5.2;
    *(temp+1)= -4.2;
    return temp;
}


int main()
{
    printf("Adres 1 zmiennej: %p, Wartosc: %f", foo(), *foo());
    printf("\nAdres 2 zmiennej: %p, Wartosc: %f", foo()+1, *(foo()+1));
    return 0;
}
