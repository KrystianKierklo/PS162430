#include <stdio.h>
#include <stdlib.h>

void usuwanie(unsigned int n, unsigned int m, int **tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        free(tab[i]);
    }
    free(tab);
}


int main()
{
    return 0;
}
