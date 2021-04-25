#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m, int k)
{
    int suma = 0;
    for(int i=n;i<=k;i+=n)
    {
        if(i>m && i<k)
        {
            suma = suma + i;
        }
    }
    return suma;
}

int main()
{
    printf("%d", foo(3,5,20));
    return 0;
}
