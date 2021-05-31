#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dlugosc(char *napis)
{
    int licznik = 0;
    while(*napis)
    {
        licznik++;
        napis++;
    }
    return licznik;
}

int dlugosc_wchar(wchar_t *napis_wchar)
{
    int licznik = 0;
    while(*napis_wchar)
    {
        licznik++;
        napis_wchar++;
    }
    return licznik;
}


int main()
{
    char *napis = "Krystian ma psa i kota";
    wchar_t *napis_wchar = L"Krystian nie ma kota.";

    printf("Dlugosc chara wynosi: %d", dlugosc(napis));
    printf("\nDlugosc w_chara wynosi: %d", dlugosc_wchar(napis_wchar));
    return 0;
}
