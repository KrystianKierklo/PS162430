#include <stdio.h>
#include <stdlib.h>

int foo1(int a)
{
    return a;
}

int foo2(int a)
{
    return a%3;
}

int foo3(int (*wskaznik1)(int a), int (*wskaznik2)(int b), unsigned int n )
{
    for(int i=0; i<=n; i++)
    {
        if(wskaznik1(i) != wskaznik2(i))
            return 0;
    }
    return 1;
}


int main()
{
    int n=10;
    int wynik = foo3(&foo1, &foo2, n);
    printf("%d", wynik);
    return 0;
}
