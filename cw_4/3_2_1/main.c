#include <stdio.h>
#include <stdlib.h>

int foo(int*a, int*b)
{
    if(*a < *b)
    {
        return *a;
    }
    if(*a > *b)
    {
        return *b;
    }
    else
    {
        return NULL;
    }
}


int main()
{
    int a = 3;
    int b = 7;
    printf("%d", foo(&a, &b));
    return 0;
}
