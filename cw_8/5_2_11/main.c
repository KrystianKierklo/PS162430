#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void wytnijzw(char *nap1, char *nap2)
{
    int i,j;
    int wyst[256]={};
    for(i=0;nap2[i]!=0;i++)
    {
        wyst[nap2[i]]=1;
    }
    for(i=0,j=0;nap1[i]!=0;i++)
    {
        if(wyst[nap1[i]]==0)
        {
            if(j<i)
            {
                nap1[j]=nap1[i];
            }
            j++;
        }
    }
    nap1[j]=0;
}

bool czywyst(wchar_t z, wchar_t *nap)
{
    int i;
    for(i=0;nap[i]!=0;i++)
    {
        if(nap[i]==z)
        {
            return true;
        }
        return false;
    }
}


void wwytnijzw(wchar_t *nap1, wchar_t *nap2)
{
    int i,j;
    for(i=0,j=0;nap1[i]!=0;i++)
    {
        if(!czywyst(nap1[i],nap2))
        {
            if(j<i)
            {
               nap1[j]=nap1[i] ;
            }
            j++;
        }
    }
    nap1[j]=0;
}





int main()
{
    char nap1[]="abcdefgh";
    char nap2[]="acefh";
    wytnijzw(nap1, nap2);
    printf("%s",nap1);
    return 0;
}
