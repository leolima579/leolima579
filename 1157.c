#include <stdio.h>

int x,i;

main()
{
    scanf("%i",&x);

    for(i=1;i<=x;i++)
    {

    if(x%i==0)
        printf("%i\n",i);

    }
    return 0;
}
