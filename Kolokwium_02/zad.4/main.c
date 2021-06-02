#include <stdio.h>
#include <stdlib.h>

struct Biegacz
{
    char imie[20];
    int rekord;
};

char *foo(struct Biegacz tab[], int n)
{
    int temp=100;
    for(int i=0;i<n;i++)
    {
        if(temp>tab[i].rekord)
        {
            temp=tab[i].rekord;
        }
    }
    char *imie;
    for(int j=0;j<n;j++)
    {
        if(tab[j].rekord==temp)
        {
           imie=tab[j].imie;
        }
    }
    return imie;
}


int main()
{
    struct Biegacz z1 = {"Krystian",12};
    struct Biegacz z2 = {"Dawid",16};
    struct Biegacz z3 = {"Kuba",13};
    struct Biegacz z4 = {"Tomek",14};
    struct Biegacz z5 = {"Maciek",15};

    struct Biegacz tab[5]={z1,z2,z3,z4,z5};

    printf("%s", foo(tab,5));
    return 0;
}
