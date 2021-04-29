#include <stdio.h>
#include <stdlib.h>
int porownaj (const char *, const char *);
int main ()
{
    int wynik;
    char *napis1 = "123";
    char *napis2 = "123";
    wynik=porownaj(napis1,napis2);
    if(wynik==1)
    {
        printf("Napisy sa takie same!");
    }
    else
    {
        printf("Napisy sa rozne!");
    }
    return 0;
}

 int porownaj( const char *napis1,  const char *napis2)
{
   while (*napis1)
    {
        if (*napis1 != *napis2)
        {
            return 0;
        }
        napis1++;
        napis2++;
    }
    return 1;
}

