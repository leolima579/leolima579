#include <stdio.h>


main ()
{
    int I,J,x;
    J=60;
    I=1;

    while(J>=0)
    {
    printf("I=%d J=%d\n",I,J);
    I+=3;
    J-=5;
    }
    return 0;

}
