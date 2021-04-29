#include <stdio.h>
#include <stdlib.h>
int porownaj (const wchar_t *, const wchar_t *);
int main ()
{
    int wynik;
    wchar_t *napis1 = "123";
    wchar_t *napis2 = "123";
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

 int porownaj( const wchar_t *napis1,  const wchar_t *napis2)
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

