#include <stdio.h>

main()
{
    int X,Y,total = 0,Maior,Menor,i;
        scanf("%d%d",&X,&Y);
    if(X>Y)
    {
    Maior = X;
    Menor = Y;
    }
    else{
    Maior = Y;
    Menor = X;
    }
     for(i = (Menor + 1); i < Maior; ++i)
 {
  if(i % 2 != 0){
   total += i;
  }
 }
        printf("%d\n",total);
    return 0;
}
