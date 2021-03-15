#include <stdio.h>
#include <stdlib.h>

int wart_bezwzgledna(int n)
{
    if(n<0)
        n*=-1;
    return n;
}

int wart_bezwzgledna2(int n)
{
    if(n>=0)
        return n;
    return -n;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", wart_bezwzgledna(n));
    return 0;
}
