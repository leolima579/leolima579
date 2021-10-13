#include <stdio.h>


main ()

{
int Y,i,t,x;
int N[3];

        for(i=0;i<4;i++)
        {
        scanf("%d",&N[i]);
        }

                for(i=0,t=3;i<4;i++,t--)
                {
                    x=N[i];
                    N[i]=N[t];
                    N[t]=x;

                }

        for(i=0;i<4;i++)
        {
            printf("N[%d] =%d\n",i,N[i]);

        }




return 0;
}
