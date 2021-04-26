#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n, unsigned int m)
{
    if(n==0)
        return 2*m;
    foo(n,m) == foo(m,n) + 1;
    return foo(m-1,n-1) + m - n;
}

int main()
{
    printf("%d\n", foo(0,0));
    return 0;
}
