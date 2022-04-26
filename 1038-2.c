#include <stdio.h>

main(){
int X,Y;
float VF;
    scanf("%d%d",&X,&Y);

    if(X==1){
            VF = Y * 4.00;
        printf("Total: R$ %.2f\n",VF);}
    else if(X==2){
            VF = Y * 4.50;
        printf("Total: R$ %.2f\n",VF);}
    else if(X==3){
            VF = Y * 5.00;
        printf("Total: R$ %.2f\n",VF);}
        else if(X==4){
            VF = Y * 2.00;
        printf("Total: R$ %.2f\n",VF);}
            else if(X==5){
            VF = Y * 1.50;
        printf("Total: R$ %.2f\n",VF);}

    return 0;
}
