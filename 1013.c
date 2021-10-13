#include <stdio.h>

main()
{
int A,B,C,D,MaiorAB;

    scanf("%d%d%d",&A,&B,&C);
    D = (A+B+abs(A-B))/2;
    MaiorAB = (D+C+abs(D-C))/2;

            printf("%d eh o maior",MaiorAB);


    return 0;

}
