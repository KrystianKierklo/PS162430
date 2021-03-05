#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int current=1;
    int prev=0;
    for(int i=0;i<n;i++)
    {
        current=current+prev;
        prev=current-prev;
    }
    printf("%d",current);
    return 0;
}
