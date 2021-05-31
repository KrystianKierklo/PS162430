#include <stdio.h>
#include <stdlib.h>

int porownaj(char *napis1, char *napis2)
{
    while(*napis1)
    {
        if(*napis1 != *napis2)
        {
            return 0;
        }
        napis1++;
        napis2++;
    }

    return 1;
}

int porownaj_wchar(wchar_t *napis3, wchar_t *napis4)
{
    while(*napis3)
    {
        if(*napis3 != *napis4)
        {
            return 0;
        }
        napis3++;
        napis4++;
    }

    return 1;
}



int main()
{
    char *napis1 = "ALA MA KOTA";
    char *napis2 = "ALA MA KOTA";

    wchar_t *napis3 = L"komputer";
    wchar_t *napis4 = L"komputer";

    printf("Porownanie dla charow: %d", porownaj(napis1, napis2));
    printf("\nPorownanie dla w_charow: %d", porownaj_wchar(napis3, napis4));
    return 0;
}
