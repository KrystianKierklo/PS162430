#include <stdio.h>
#include <stdlib.h>

void foo(int*a, int*b)
{
   int temp =*a;
   *a = *b;
   *b = temp;
}

int main()
{
    int a=5, b=10;
    printf("%d  %d", a, b);
    foo(&a,&b);
    printf("\n%d  %d", a, b);
    return 0;
}
