#include <stdio.h>
#include <stdlib.h>

int suma(int **tab,int n, int m)
{
    int temp=0;
    int mini=n;
    if (m<n)
        mini=m;
    for(int i=0;i<mini;i++)
    {
        temp+=tab[i][i];
        temp+=tab[i][m-1-i];
    }
    return temp;
}

int main()
{
    int **tab=malloc(2*sizeof(int*));
    tab[0]=malloc(3*sizeof(int));
    tab[1]=malloc(3*sizeof(int));
    **tab=5;
    *(*tab+1)=-2;
    *(*tab+2)=7;
    *(*(tab+1))=4;
    *(*(tab+1)+1)=-3;
    *(*(tab+1)+2)=11;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("[%d,%d]=%d\n",i,j,tab[i][j]);
        }
    }
    printf("suma %d\n",suma(tab,2,3));
    return 0;
}
