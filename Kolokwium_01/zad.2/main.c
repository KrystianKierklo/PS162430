#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n)
{
    int suma = 0;
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j*j==i)
                suma = suma+i;
        }
    }
    return suma;
}


int main()
{
    printf("%d\n", foo(10));
    return 0;
}
