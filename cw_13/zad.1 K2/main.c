#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20]="KRYSTIAN"; //tu trzeba wpisac swoje imie, wszystkie litery duze
    char z = *(napis+2); //z='Y'
    int a = napis[3]; // a=83   ,z='Y'
    z++; // a=83   ,z=90'Z'
    ++a; // a=84   ,z=90'Z'
    z=(a-=2)+3; // a=82   ,z=85'U'
    a=a^4; // a=86   ,z=85'U
    return 0;
}
