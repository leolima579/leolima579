#include <stdio.h>

int main()
{
int X,Y;
float F;
float comida[5] = {0,4.0,4.50,5.00,2.00,1.50};

    scanf("%d%d",&X,&Y);
    F = comida[X]*Y;
    printf("Total: R$ %.2f\n",F);

    return 0;
}
