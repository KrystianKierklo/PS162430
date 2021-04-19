#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n)
{
    int suma = 0;
    for(int i=0;i<n;i++)
    {
        if(i % 2 != 0)
        {
            suma = suma + i;
        }
    }
    return suma;
}

int main()
{
    printf("%d\n",foo(1));
    printf("%d\n",foo(5));
    printf("%d\n",foo(12));
    return 0;
}
