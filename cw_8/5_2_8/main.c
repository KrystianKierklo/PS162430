 #include <stdio.h>
 #include <ctype.h>

 void zamiana(char *napis)
 {
    for(int i=0;napis[i]!=0;i++)
    {
        if(napis[i]>='a' && napis[i]<='z')
        {
            napis[i] = napis[i]-('a'-'A');
        }
    }
 }



int main()
{
    char napis[] = "AlA ma KoTa";
    zamiana(napis);
    printf("%s", napis);
    return 0;
}
