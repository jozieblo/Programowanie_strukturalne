#include <stdio.h>
#include <stdlib.h>
int wytnij (const char *, const char *);
int main ()
{
    char *napis1 = "Przyklad";
    char *napis2 = "Napis";
   wytnij(napis1,napis2);
}

 int wytnij( const char *napis1,  const char *napis2)
{
 char wyjatek[30];
 for (int i=0;i<='\0';i++)
 {
     if(napis1[i]!=napis2[i])
     {
         wyjatek+=napis1[i];
     }
 }

    return napis1;
}
