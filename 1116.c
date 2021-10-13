#include <stdio.h>


main ()

{
    int X,Y,N,i;
    float sum;
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        scanf("%d%d",&X,&Y);
        sum= (float)X/Y;

    if(Y==0)
        {
        printf("divisao impossivel\n");
        }
    else if(X==0)
        {
        printf("0.0\n");
        }
        else if(X!=0 && Y!=0){
        printf("%.1f\n",sum);
        }



    }



    return 0;
}
