#include <stdio.h>

main()
{
float A,B,C,X;
    scanf("%f%f%f",&A,&B,&C);
        X=A*C/2;
        printf("TRIANGULO: %.3f\n",X);
        X = 3.14159*C*C;
        printf("CIRCULO: %.3f\n",X);
        X = ((A+B)*C/2);
        printf("TRAPEZIO: %.3f\n",X);
        X = B*B;
        printf("QUADRADO: %.3f\n",X);
        X = A*B;
        printf("RETANGULO: %.3f\n",X);


    return 0;

}
