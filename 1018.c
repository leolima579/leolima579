#include <stdio.h>
main()
{
int N,troco,nota100,nota50,nota20,nota10,nota5,nota2;

        scanf("%d",&N);
        troco = N;

        nota100 = N/100;

        troco = troco - (nota100*100);
        nota50  = troco/50;

        troco = troco - (nota50*50);
        nota20  = troco/20;

        troco = troco -(nota20*20);
        nota10  = troco/10;

        troco = troco -(nota10*10);
        nota5   = troco/5;

        troco = troco -(nota5*5);
        nota2   = troco/2;

        troco = troco -(nota2*2);

        printf("%d\n",N);
        printf("%d nota(s) de R$ 100,00\n",nota100);
        printf("%d nota(s) de R$ 50,00\n",nota50);
        printf("%d nota(s) de R$ 20,00\n",nota20);
        printf("%d nota(s) de R$ 10,00\n",nota10);
        printf("%d nota(s) de R$ 5,00\n",nota5);
        printf("%d nota(s) de R$ 2,00\n",nota2);
        printf("%d nota(s) de R$ 1,00\n",troco);

    return 0;
}
