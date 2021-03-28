#include <stdio.h>
#include <stdlib.h>

int foo(int*a, int*b)
{
    return *a + *b;
}

int main()
{
    int a=5, b=6;
    printf("%d", foo(&a,&b));
    return 0;
}
