#include <stdio.h>
#include <stdlib.h>

float foo(unsigned int n, float tab1[n], float tab2[n])
{
    for(int i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            float temp;
            temp = tab1[i];
            tab1[i]=tab2[i];
            tab2[i]=temp;

        }
    }
}


int main()
{
    float tab1[]={1.5, 2.5, 3.5, 5};
    float tab2[]={0.5, 1.2, 5.5, 8.2};

    for(int i=0; i<sizeof(tab1)/sizeof(float); i++)
        printf("%f ", tab1[i]);
    printf("\n");
    for(int i=0; i<sizeof(tab1)/sizeof(float); i++)
        printf("%f ", tab2[i]);

    printf("\n");
    printf("\n");

    foo(4, tab1, tab2);

    for(int i=0; i<sizeof(tab1)/sizeof(float); i++)
        printf("%f ", tab1[i]);
    printf("\n");
    for(int i=0; i<sizeof(tab1)/sizeof(float); i++)
        printf("%f ", tab2[i]);



    return 0;
}
