#include <stdio.h>
#include <stdlib.h>

int foo(float tab1[], float tab2[])
{
    int zliczanie=0;
    for(int i=0;i<=sizeof(tab1)/sizeof(float)-1;i++)
    {
        if(abs(tab1[i]-tab2[i])<=0.1)
        {
            zliczanie = zliczanie + 1;
        }
    }
    if(zliczanie == sizeof(tab1)/sizeof(float))
        return 1;
    else
        return 0;
}

int main()
{
    float tab1[]={2.2,3,4,5,6.2};
    float tab2[]={2.2,3,4,5,6.2};
    float tab3[]={2,3,40,5.5,6.7};
    printf("%d\n",foo(tab1,tab2));
    printf("%d\n",foo(tab1,tab3));
    return 0;
}
