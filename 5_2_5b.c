#include <stdio.h>
#include <stdlib.h>
int przepisz (const wchar_t*, const wchar_t *);
int main ()
{
    wchar_t *napis1 = "Przyklad";
    wchar_t *napis2 = "Napis";
   przepisz(napis1,napis2);
}

 int przepisz( const wchar_t *napis1,  const wchar_t *napis2)
{
int i=0;
   do
    {
        *napis2[i] = *napis1[i];
        i++;
    }while (*napis1!='\0')
    return napis2;
}

