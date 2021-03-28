#include <stdio.h>
#include <stdlib.h>

double* foo()
{
    return malloc(sizeof(double));
}


int main()
{
    printf("%p", foo());
    return 0;
}
