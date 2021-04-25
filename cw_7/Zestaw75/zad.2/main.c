#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m, int k)
{
    if(m % n == 0 && m % k == 0)
        return 2;
    if(m % n == 0 || m % k == 0)
        return 1;
    return 0;
}

int main()
{
    printf("%d\n", foo(5,10,2));
    return 0;
}
