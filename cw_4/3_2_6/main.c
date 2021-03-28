#include <stdio.h>
#include <stdlib.h>

void foo(int n, int*w)
{
    *w = n;
}

int main()
{
    int n = 13;
    int w;
    foo(n, &w);
    printf("%d", w);
    return 0;
}
