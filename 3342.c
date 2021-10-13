#include <stdio.h>

main ()

{
    int n;
    float squares=0;
    int i,p;
    int branco;
    int preto;

    scanf("%d",&n);
    squares=(n*n);
    p=squares;

    if(p%2==0)
    {
        branco = 0;
        preto = 1;
    }
    else
    {
        branco = 1;
        preto = 0;
    }


    for(i=2;i<=squares;i++)
    {
        if(i%2==0)
        {
            branco+=1;
        }
            else
            {
                preto+=1;
            }
    }

    printf("%d casas brancas e %d casas pretas\n",branco,preto);

    return 0;

}
