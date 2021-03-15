#include <stdio.h>
#include <stdlib.h>

void foo()
{
    static int liczba = 0;
    liczba++;
    printf("wywolanie: %d\n", liczba);
}

int main()
{
    foo();
    foo();
    foo();
    foo();
    return 0;
}
