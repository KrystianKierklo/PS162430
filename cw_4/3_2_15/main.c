#include <stdio.h>
#include <stdlib.h>

void foo(int const *a, int * b)
{
    *b = *a;
}


int main()
{
    int const a=7;
    int b;
    foo(&a, &b);
    printf("%d", b);
    return 0;
}
