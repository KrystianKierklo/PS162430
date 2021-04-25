#include <stdio.h>
#include <stdlib.h>

int foo(double(*fun1)(double a), double(*fun2)(double b), double x)
{
    if (x<1)
        return -1;
    double n=1;
    for(double k=1;k<=x;k++)
    {
        n=k;
    }
    for(int i=1;i<n;i++)
    {
        if(fun1(x)!=fun2(x)*fun2(x)*fun2(x))
            return -1;
    }
    return 1;
}

double test1(double a)
{
    return a;
}

double test2(double a)
{
    return a*a*a;
}

int main()
{
    printf("%d\n", foo(test1, test2, 5));
    printf("%d\n", foo(test1, test2, 1.3));
    printf("%d\n", foo(test2, test1, 5.2));
    return 0;
}
