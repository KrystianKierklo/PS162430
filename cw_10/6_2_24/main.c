#include <stdio.h>
#include <stdlib.h>

void przesun(int **tab, unsigned int n, unsigned int m)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        temp=tab[i][m-1];
        for(int j=m-1;j>0;j--)
        {
            tab[i][j]=tab[i][j-1];
        }
        tab[i][0]=temp;
    }
}



int main()
{
    return 0;
}
