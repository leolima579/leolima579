#include <stdio.h>


main()
{
    int start,end,hf;

    scanf("%d%d",&start,&end);

        if(start>end)
        {
         end = end+24;
         hf = end - start;
        }
        if(start==end)
        {
        hf = 24;
        }
        if(end>start){
        hf = end - start;
        }
        printf("O JOGO DUROU %d HORA(S)\n",hf);



    return 0;
}
