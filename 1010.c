#include <stdio.h>

main()
{
int code,code2,amount,amount2;
float value,value2,total;

    scanf("%d%d%f%d%d%f",&code,&amount,&value,&code2,&amount2,&value2);
    total = ((value*amount)+(value2*amount2));
    printf("VALOR A PAGAR: R$ %.2f\n",total);

    return 0;
}
