#include <stdio.h>
#include <stdlib.h>

char *godzina(int godz, int min, int sek)
{
    char *czas = malloc(9*sizeof(char));
    sprintf(czas,"%02d:%02d:%02d", godz, min, sek);
    return czas;
}

wchar_t *wgodzina(int godz, int min, int sek)
{
    wchar_t *czas = malloc(9*sizeof(wchar_t));
    swprintf(czas,9,L"%02d:%02d:%02d", godz, min, sek);
    return czas;
}

int main()
{
    int godz = 16;
    int min = 50;
    int sek = 33;
    printf("%s", godzina(godz,min,sek));
    wprintf(L"\n%s", wgodzina(godz,min,sek));
    return 0;
}
