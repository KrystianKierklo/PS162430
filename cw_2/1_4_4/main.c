#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int silnia = 1;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    if(n>=0)
    {
        for(int i=1;i<=n;i++)
        {
            silnia = silnia * i;
        }
    printf("\nn! wynosi: %d", silnia);
    }
    else
    {
        printf("\nPodales niewlasciwa liczbe n!!");
    }
    return 0;
}
