#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    printf("Podaj 4 liczby: \n");
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    if(a<0)
    {
        a*=-1;
    }
    int x=0;
    for(int i=0;a*i*i+b*i+c<=d;i++)
    {
        x=i;
    }
    printf("\n%d", x+1);
    int x_2=0;
    for(int j=0;5*j*j+a*j+b<=c;j++)
    {
        x_2=j;
    }
    printf("\n%d", x_2-1);
    int x_3=0;
    for(int k=0;5*k*k+a*k+b<=c;k++)
    {
        x_3=k;
    }
    printf("\n%d", x_3);
    return 0;
}
