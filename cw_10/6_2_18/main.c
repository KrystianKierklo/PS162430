#include <stdio.h>
#include <stdlib.h>

void wyswietl(int **tab, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf(" %d", *(*(tab+i)+j));
        }
        printf("\n");
    }
}



int main()
{

    return 0;
}
