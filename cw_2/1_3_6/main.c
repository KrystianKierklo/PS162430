#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e,f;
    scanf("%f\n%f\n%f\n%f\n%f\n%f",&a,&b,&c,&d,&e,&f);
    float ag,ax,ay;
    ag=a*e-b*d;
    ax=c*e-b*f;
    ay=a*f-c*d;
    if (ag!=0)
    {
        printf("x=%f, y=%f",ax/ag,ay/ag);
    }
    else
    {
        if (ax==0 && ay==0)
        {
            printf("Uklad ma nieskonczenie wiele rozwiazan");
        }
        else
        {
            printf("brak rozwiazan");
        }
    }

    return 0;
}
