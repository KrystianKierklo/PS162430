#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n)
{
    if(n==0 || n == 1)
        return 1;
    if(n%3==0)
        return foo((n-1)/3);
    if(n%3==1)
        return foo(n-1)+1;
    return 5;

}


int main()
{
    printf("%d\n", foo(2));
    printf("%d\n", foo(3));
    printf("%d\n", foo(4));
    printf("%d\n", foo(5));
    return 0;
}
