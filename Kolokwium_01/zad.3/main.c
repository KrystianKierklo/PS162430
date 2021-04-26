#include <stdio.h>
#include <stdlib.h>

float foo(float(*g)(float a, float b), float x)
{
    return g(x, -x);
}

float foo1(float n, float m)
{
    return n+m;
}

float foo2(float n, float m)
{
    return n-m;
}

int main()
{
    printf("%f\n", foo(foo1, 5));
    printf("%f", foo(foo2, 5));
    return 0;
}
