#include <stdio.h>
#include <stdlib.h>

unsigned int* foo(unsigned int n)
{
    return malloc(n * sizeof(unsigned int));
}


int main()
{
    unsigned int n;
    printf("%p", foo(n));
    return 0;
}
