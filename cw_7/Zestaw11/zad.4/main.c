#include <stdio.h>
#include <stdlib.h>

float foo(unsigned int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return foo(n-2)+1/(foo(n-1));
}


int main()
{
    printf("%f\n", foo(2));
    printf("%f\n", foo(4));
    return 0;
}
