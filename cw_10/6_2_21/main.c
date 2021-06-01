#include <stdio.h>
#include <stdlib.h>

void foo(unsigned int n, int *tab)
{
    int p;
    for(int i=0;i<n/2;i++)
    {
        p=tab[i];
        tab[i]=tab[n-1-i];
        tab[n-1-i]=p;
    }
}

void odwroc(int **tab, unsigned int n, unsigned int m)
{
    for(int i=0;i<n;i++)
    {
        foo(n,tab[i]);
    }
}



int main()
{
    return 0;
}
