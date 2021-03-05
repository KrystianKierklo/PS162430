#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d\n%d",&n,&m);
    for(int i=1;i<=m;i++)
    {
        printf("%d\n", n*i);
    }
    return 0;
}
