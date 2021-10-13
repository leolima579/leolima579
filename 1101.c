#include <stdio.h>

main()
{
    int M,N,x,i,p;
    int maior,menor,soma;
    do
{
    soma = 0;
    scanf("%d%d",&M,&N);
        if(M<=0 || N<=0)
        {
           break;
        }
                else{
                    if(M>N)
                        {
                        maior = M;
                        menor = N;
                        }
                        else
                        {
                        maior = N;
                        menor = M;
                        }
    p=maior-menor;

    for(i=0;i<=p;i++)
            {
            printf("%d ",menor);
            soma = soma+menor;
            menor++;
            }
                    }
        printf("Sum=%d\n",soma);

}while(M>0 && N>0);

    return 0;
}
