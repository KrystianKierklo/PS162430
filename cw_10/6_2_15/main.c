#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n, int tab[n][100][100])
{
    int suma_liczb=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<100;j++)
        {
            for(int k=0;k<100;k++)
            {
                suma_liczb+=tab[i][j][k];
            }
        }
    }
}



int main()
{
    return 0;
}
