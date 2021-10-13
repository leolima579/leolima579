#include <stdio.h>

main()

{
    int X,i,h,l;
    int nota = 0;
    int media = 0;
    int N = 0;

    for(i=0;N<2;i++)
    {
        scanf("%d",&X);

            if(X<0)
            {
                printf("nota invalida\n");
            }
            else
            {
                media = media+X;
                N++;
            }
    }
    media=media/2;
    printf("media = %d\n",media);
  //      printf("%d out\n",l);



    return 0;
}
