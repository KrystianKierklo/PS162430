#include <stdio.h>
#include <stdlib.h>

int dlugosc(char*napis)
{
    int i=0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}

int foo(char*n1, char*n2, int n)
{
    if(n>dlugosc(n1) || n>dlugosc(n2))
        return 0;
    if(n1[n]<n2[n])
        return 1;
    return 0;
}

int main()
{
    char napis1[20]="abcde23";
    printf("%d\n",dlugosc(napis1));
    char napis2[20]="tERTS";
    printf("%d\n",foo(napis1,napis2,20));
    return 0;
}
