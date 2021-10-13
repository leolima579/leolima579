#include <stdio.h>

main ()


{
    int N;
    int coelho = 0;
    int rato = 0;
    int sapo = 0;
    int total = 0;
    int qnt;
    int i;
    char tipo;
    float totalc,totalr,totals;

    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d %c",&qnt,&tipo);

        if(tipo=='C')
        {
            coelho+=qnt;
            total+=qnt;
        }
        if(tipo=='R')
        {
            rato+=qnt;
            total+=qnt;
        }
        if(tipo=='S')
        {
            sapo+=qnt;
            total+=qnt;
        }

    }

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",coelho);
    printf("Total de ratos: %d\n",rato);
    printf("Total de sapos: %d\n",sapo);

    totalc = (float)coelho/total*100;
    totalr = (float)rato/total*100;
    totals = (float)sapo/total*100;

    printf("Percentual de coelhos: %.2f %%\n",totalc);

    printf("Percentual de ratos: %.2f %%\n",totalr);

    printf("Percentual de sapos: %.2f %%\n",totals);






    return 0;
}
