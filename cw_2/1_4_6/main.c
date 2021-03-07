#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int liczba = 2;
    int liczba_2 = 2;
    printf("Podaj liczbe n wieksza od dwoch: ");
    scanf("%d", &n);
    if(n % 2 == 0)
    {
        for(int i=4; i<=n; i+=2)
        {
            liczba = liczba * i;
        }
    printf("%d", liczba);
    }
    else
    {
        for(int i=4; i<=n; i+=2)
        {
            liczba_2 = liczba_2 * i;
        }
    printf("%d", liczba_2);
    }
    return 0;
}
