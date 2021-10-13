#include <stdio.h>

main()
{
    int N,X,Y,i;
    int maior,menor,soma;
    scanf("%d",&N);


        for(i=1;i<=N;i++){
            soma = 0;
            maior = 0;
            menor = 0;
            scanf("%d%d",&X,&Y);
            if(X>=Y)
            {
             maior = X;
             menor = Y;
            }
            else
            {
            maior = Y;
            menor = X;
            }

            if(menor%2!=0)
            {
                menor++;
            }
        do


            {

                if(menor%2!=0)
                    {
                    soma+=menor;
                    menor++;
                    }
                    else if(menor%2==0)
                    {
                     menor++;
                    }

            }while(menor<maior);

            if(X==Y){
                printf("0\n");
                soma = 0;
            }
            else{
            printf("%d\n",soma);
            soma = 0;
            }

        }




    return 0;
}
