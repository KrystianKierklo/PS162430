#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[30]="33214MtPpXUuwrYXYw";
    char w = *(napis+2); //w=50'2'
    int x = napis[3]; // x=49   ,w=50'2'
    w++; // x=49   ,w=51'3'
    int b= x--; // x=48   , b=49  ,w=51'3'
    w=(x-=2)+3; // x=46   , b=49  ,w=49'1'
    x=x^4; // x=42   , b=49  ,w=49'1'
    b=x+++b; // x=43   , b=91  ,w=49'1'
    return 0;
}
