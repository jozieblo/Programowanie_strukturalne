#include <stdio.h>
#include <stdlib.h>
int wytnij (const wchar_t *, const wchar_t *);
int main ()
{
    wchar_t *napis1 = "Przyklad";
    wchar_t *napis2 = "Napis";
   wytnij(napis1,napis2);
}

 int wytnij( const wchar_t *napis1,  const wchar_t *napis2)
{
 wchar_t wyjatek[30];
 for (int i=0;i<='\0';i++)
 {
     if(napis1[i]!=napis2[i])
     {
         wyjatek+=napis1[i];
     }
 }

    return napis1;
}
