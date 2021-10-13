#include <stdio.h>

main()
{
double R;
float V;
    scanf("%lf",&R);
    V = ((4/3.0)*3.14159*R*R*R);
    //(((4.0/3)*3.14159)*(R*R*R))
    printf("VOLUME = %.3f\n",V);


    return 0;
}
