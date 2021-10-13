#include <stdio.h>

main()

{
    int N,X,i,h,l;
    h = 0;
    l = 0;

    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        scanf("%d",&X);

            if(X>=10 && X<=20)
            {
                h+=1;
            }
            else
            {
                l+=1;
            }
    }
    printf("%d in\n",h);
        printf("%d out\n",l);



    return 0;
}
