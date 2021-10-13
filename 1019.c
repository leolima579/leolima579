#include <stdio.h>
#include <math.h>
int main()
{
int value,seg,min,hour;
    scanf("%d",&value);
        //seg = fmod(value,60);
      //  min = fmod(value/60,60);
        seg = value %60;
        min = value/60 % 60;
        hour = ((value/60)/60);
        printf("%d:%d:%d\n",hour,min,seg);
    return 0;
}

