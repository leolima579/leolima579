#include <stdio.h>

main()

{
    int x;
    scanf("%d",&x);

    if(x == 61)
    {
        printf("Brasilia\n");
    }
    if(x == 71)
    {
        printf("Salvador\n");
    }
    if(x == 11)
    {
        printf("Sao Paulo\n");
    }
    if(x == 21)
    {
        printf("Rio de Janeiro\n");
    }

    if(x == 32)
    {
        printf("Juiz de Fora\n");
    }

    if(x == 19)
    {
        printf("Campinas\n");
    }

    if(x == 27)
    {
        printf("Vitoria\n");
    }

    if(x == 31)
    {
        printf("Belo Horizonte\n");
    }

    if(x!=61 && x!=71 && x!=11 && x!=21 && x!=32 && x!=19 && x!=27 && x!=31)
    {
        printf("DDD nao cadastrado\n");
    }





    return 0;
}
