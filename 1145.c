#include <stdio.h>


main ()
{
    int X,Y,i,z;
    scanf("%d%d",&X,&Y);

        for(i=1;i<=Y;i++)
        {
            for(z=1;z<X;z++)
            {
            printf("%d ",i);
            i++;
            }
            printf("%d\n",i);
        }



    return 0;
}
