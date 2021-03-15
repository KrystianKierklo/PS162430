#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potegowanie(int n)
{
  return pow(2,n);
}

int main()
{
    int n;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);
    printf("%d", potegowanie(n));
    return 0;
}
