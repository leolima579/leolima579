#include <stdio.h>
main()
{
int nota100,nota50,nota20,nota10,nota5,nota2;
int m100,m050,m025,m010,m005,m001;
float N,troco;
        scanf("%f",&N);
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

        printf("NOTAS:\n");
        printf("%d nota(s) de R$ 100,00\n",nota100);
        printf("%d nota(s) de R$ 50,00\n",nota50);
        printf("%d nota(s) de R$ 20,00\n",nota20);
        printf("%d nota(s) de R$ 10,00\n",nota10);
        printf("%d nota(s) de R$ 5,00\n",nota5);
        printf("%d nota(s) de R$ 2,00\n",nota2);

        troco = troco -(nota2*2);
        m100 = troco/1;

        troco = troco -m100;
        m050 = troco/0.50;

        troco = troco -(m050*0.50);
        m025 = troco/0.25;

        troco = troco -(m025*0.25);
        m010 = troco/0.10;

        troco = troco -(m010*0.10);
        m005 = troco/0.05;

        troco = troco -(m005*0.05);
        m001= troco/0.01;


        printf("MOEDAS:\n");
        printf("%d moeda(s) de R$ 1.00\n",m100);
        printf("%d moeda(s) de R$ 0.50\n",m050);
        printf("%d moeda(s) de R$ 0.25\n",m025);
        printf("%d moeda(s) de R$ 0.10\n",m010);
        printf("%d moeda(s) de R$ 0.05\n",m005);
        printf("%d moeda(s) de R$ 0.01\n",m001);


    return 0;
}
