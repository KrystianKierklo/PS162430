#include <stdio.h>
#include <stdlib.h>

void zwolnij(unsigned int n, unsigned int m, int tab[n][m])
{
    free(tab);
}

int main()
{
    return 0;
}
