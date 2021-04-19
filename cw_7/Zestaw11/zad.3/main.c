#include <stdio.h>
#include <stdlib.h>

float* foo()
{
    float *temp=malloc(2*sizeof(float));
    *(temp)=2.8;
    *(temp+1)=3.2;
    return temp+1;
}


int main()
{
    printf("%p %f\n", foo(), *foo());
    return 0;
}
