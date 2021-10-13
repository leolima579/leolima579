#include <stdio.h>

main()
{
double hour,dist;
double L;
        scanf("%lf%lf",&hour,&dist);
        L = ((dist*hour)/12);
        printf("%.3lf",L);


    return 0;

}
