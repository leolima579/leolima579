#include <stdio.h>

main()
{
    int X,Y,i;

do{
         scanf("%d%d",&X,&Y);
if(X==Y)
{
    goto end;
}
    if(X>Y)
    {
        printf("Decrescente\n");
    }
    else
        {
            printf("Crescente\n");
        }
}while(X!=Y);


end:

    return 0;
}
