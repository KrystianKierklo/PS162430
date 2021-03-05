#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int p=0;
    int i;
    for(i=0;i*i<=n;i++)
    {
        p=i;
    }
    printf("%d",p);
    return 0;
}
