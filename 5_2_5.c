#include <stdio.h>
#include <stdlib.h>
int przepisz (const char *, const char *);
int main ()
{
    char *napis1 = "Przyklad";
    char *napis2 = "Napis";
   przepisz(napis1,napis2);
}

 int przepisz( const char *napis1,  const char *napis2)
{
int i=0;
   do
    {
        *napis2[i] = *napis1[i];
        i++;
    }while (*napis1!='\0')
    return napis2;
}
