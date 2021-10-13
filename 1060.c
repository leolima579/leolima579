#include <stdio.h>

main()
{
    int i,pos=0;
    float A;
    for(i = 0; i<=5 ;i++){
        scanf("%f",&A);
        if(A>0){
        pos++;
        }
    }
    printf("%d valores positivos\n",pos);


    return 0;
}
