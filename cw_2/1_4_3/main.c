#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,k;
    scanf("%d\n%d\n%d",&n,&m,&k);
    for(int i=m+1;i<k;i++)
    {
        if(i%n==0)
        {
            printf("\n%d\n",i);
        }
    }
    return 0;
}
