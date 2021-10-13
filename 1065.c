#include <stdio.h>

main()

{
int num,i,p;

    p = 0;
    for(i = 0;i < 5; i++){
    scanf("%d",&num);
        if(num%2==0){
            p++;
        }

    }
        printf("%d valores pares\n",p);
    return 0;
}
