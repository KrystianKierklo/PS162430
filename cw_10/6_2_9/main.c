#include <stdio.h>
#include <stdlib.h>

void zera(int **tab, unsigned int n, unsigned int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            tab[i][j]=0;
        }
    }
}



int main()
{
    return 0;
}
