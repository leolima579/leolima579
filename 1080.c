#include <stdio.h>


main ()


{
    int X,H,POS,i;

    for(i=1;i<=100;i++)
        {
            scanf("%d",&X);
            if(X>H)
            {
                H = X;
                POS = i;
            }


        }
        printf("%d\n%d\n",H,POS);


    return 0;
}
