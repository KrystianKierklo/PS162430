#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d\n%d",&n,&m);
    while(n!=m)
    {
        if(n>m)
        {
            n=n-m;
        }
        else
        {
            m=m-n;
        }
    }
    printf("NWD=%d",m);
    return 0;
}
