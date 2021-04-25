#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n, int tab1[n], int tab2[n])
{
    int licznik=0;
    for(int i=0;i<n;i++)
    {
        if(tab1[i]==tab2[i])
        {
            licznik++;
        }
    }
    return licznik;
}

int main()
{
    int tab1[]={2, 4, -2, 3, 5};
    int tab2[]={2, 0, -2, 3, 1};
    printf("%d\n", foo(5, tab1, tab2));
    return 0;
}
