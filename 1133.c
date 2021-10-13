#include <stdio.h>


main()
{
int X,Y,menor,maior,rtd,i;

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
menor++;
    for(i=menor;i<maior;i++)
    {
        if(menor%5==2 || menor%5==3)
        {
            printf("%d\n",menor);
        }
        menor++;
    }

return 0;
}
