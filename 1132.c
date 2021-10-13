#include <stdio.h>


main ()


{
    int X,Y,i,menor,maior,p;
    int soma = 0;

    scanf("%d%d",&X,&Y);
    if(X>Y)
        {
            maior=X;
            menor=Y;
        }
        else
        {
            maior=Y;
            menor=X;
        }

        p = maior - menor;
        for(i=0;i<=p;i++)
        {
            if(menor%13!=0)
            {
                soma+=menor;
            }
                menor++;
        }
    printf("%d\n",soma);

    return 0;

}
