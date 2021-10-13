#include <stdio.h>

main ()
{
    int x,t;
    float i,j;
    i=0;
    j=0;
    for(t = 0;t <=10;t++)
    {

  //  do
        for(x=1;x<=3;x++)
        {
        printf("I=%g J=%g\n",i,(j+x));

        }
    //while(x<=3);


    i = i+0.2;
    j = j+0.2;
    }

return 0;

}
