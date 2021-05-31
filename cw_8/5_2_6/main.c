#include <stdio.h>
#include <stdlib.h>


int dlugosc(char napis[])
{
    int i=0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}

void kopiujn(char*napis1, char*napis2, int n)
{
    if (dlugosc(napis1)<n)
    {
        n=dlugosc(napis1);
    }
    int i;
    for(i=0;i<n;i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[i]='\0';
}


void wkopiujn(wchar_t*napis1, wchar_t*napis2, int n)
{
    if (dlugosc(napis1)<n)
    {
        n=dlugosc(napis1);
    }
    int i;
    for(i=0;i<n;i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[i]='\0';
}


int main()
{
    char nap1[] = "kota";
    char nap2[] = "Ala ma";
    kopiujn(nap1, nap2, 4);
    printf("%s", nap2);

    return 0;
}
