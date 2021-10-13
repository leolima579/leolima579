#include <stdio.h>

main()

{
    int W,X,Y,Z;
    int Wfinal,Xfinal,Yfinal,Zfinal;

    scanf("Dia %d",&W);
    scanf("%02d:%02d:%02d\n",&W,&Y,&Z);
    scanf("Dia %d",&Wfinal);
    scanf("%d : %d : %d",&Xfinal,&Yfinal,&Zfinal);


        printf("%d:%d:%d",W,Y,Z);
    //printf("\n%d dia(s)\n",(Wfinal-W));




    return 0;
}
