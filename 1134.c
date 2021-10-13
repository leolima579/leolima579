#include <stdio.h>


main()

{
    int gasolina=0;
    int alcool=0;
    int diesel=0;
    int x;


    do
    {
    scanf("%d",&x);
        if(x==1)
        {
        alcool+=1;
        }
        if(x==2)
        {
        gasolina+=1;
        }
        if(x==3)
        {
        diesel+=1;
        }


    }while(x!=4);

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alcool,gasolina,diesel);




    return 0;
}
