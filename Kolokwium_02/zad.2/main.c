#include <stdio.h>
#include <stdlib.h>

int foo(char *napis, char *napis2)
{
    int licznik = 0;
    for(int i=0;napis[i]!=0;i++)
    {
        if(napis[i]=='a' || napis[i]=='e' || napis[i]=='i' || napis[i]=='o' || napis[i]=='u'
           || napis[i]=='y' || napis[i]=='A' || napis[i]=='E' || napis[i]=='I' || napis[i]=='O' || napis[i]=='U'
           || napis[i]=='Y')
        {
            licznik = licznik + 1;
        }
    }

    for(int i=0;napis2[i]!=0;i++)
    {
        if(napis2[i]=='a' || napis2[i]=='e' || napis2[i]=='i' || napis2[i]=='o' || napis2[i]=='u' ||
           napis2[i]=='y' || napis2[i]=='A' || napis2[i]=='E' || napis2[i]=='I' || napis2[i]=='O' || napis2[i]=='U' ||
           napis2[i]=='Y')
        {
            licznik = licznik + 1;
        }
    }
    return licznik;
}



int main()
{
    char napis[]="Krystian ma kota";
    char napis2[]="Przykladowy tekst";
    printf("W oby wyrazach znajduje sie %d samoglosek.", foo(napis, napis2));
    return 0;
}
