#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float funkcja(int m, int n)
{
    float pierwiastek;
    pierwiastek = pow(n, pow(m,-1));
    return pierwiastek;
}

int main()
{
    float n,m;
    printf("Podaj stopien i podstawe pierwiastka: ");
    scanf("%f\n%f", &m,&n);
    printf("%f", funkcja(m,n));
    return 0;
}
