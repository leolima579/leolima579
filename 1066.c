#include <stdio.h>

main()
{
    int a,x;
    int pos,neg,par,impar;
    pos = 0;
    neg = 0;
    par = 0;
    impar=0;

    for(x = 1; x<= 5; x++)
    {
        scanf("%d",&a);
        if(a>0){pos++;};
        if(a<0){neg++;};
        if(a%2==0){par++;};
        if(a%2!=0){impar++;};
    }

    printf("%d valor(es) par(es)\n",par);
    printf("%d valor(es) impar(es)\n",impar);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);

    return 0;
}
