#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,p=1;
    for(a=1;a<=12;a++)
   {

    for(b=1;b<=12;b++)
    {
      p=a*b;
    printf("%d x %d=%d\n",a,b,p);

    }
    printf("\n");
   }
    return 0;
}
