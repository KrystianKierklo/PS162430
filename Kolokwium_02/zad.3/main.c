#include <stdio.h>
#include <stdlib.h>

int **foo(int **tab, int n, int m)
{

    if(n>=2)
    {
        int *temp=malloc(m*sizeof(int*));
        for(int i=0;i<m;i++)
        {
            temp[i]=tab[0][i];
        }
    }

}


int main()
{
    return 0;
}
