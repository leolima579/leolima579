#include <stdio.h>

int i,n;

int main()
{
    scanf("%d",&n);

    if(n%2 == 0)
    {
        n+=1;
    }
        for(i=0;i<=5;i++)
        {
            printf("%i\n",n);
            n+=2;
        }

    return 0;
}
