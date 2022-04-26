#include <stdio.h>




float a,b,c,d,e,f,positivo,media,divisor;


int main()


{
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    positivo = 0;
    media = 0;
    if(a>0){
        positivo++;
        media = media + a;}
    if(b>0){
        positivo++;
        media = media + b;}
    if(c>0){
        positivo++;
        media = media + c;}
    if(d>0){
        positivo++;
        media = media + d;
}
    if(e>0){
        positivo++;
        media = media + e;
        }
    if(f>0){
        positivo++;
        media = media + f;
        }
        media = media / positivo;


    printf("%.0f valores positivos\n%.1f\n",positivo,media);





//printf("%.2f",a);



    return 0;
}
