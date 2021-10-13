#include <stdio.h>


main ()

{
    int N,i;
    float a,b,c,x;


    scanf("%d",&N);

        for (i = 1;i <= N; i++)
        {
            scanf("%f%f%f",&a,&b,&c);
            printf("%.1f\n",(((a*2)+(b*3)+(c*5))/10));



        }



    return 0;
}
