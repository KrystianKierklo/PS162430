#include <stdio.h>
#include <stdlib.h>

void fooa(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        tab[i]=0;
    }
}


void wyswietl(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",tab[i]);
    }
    printf("\n");
}


int main()
{
    int taba[3]={3,4,5};
    wyswietl(3,taba);
    fooa(3,taba);
    wyswietl(3,taba);
    return 0;
}
