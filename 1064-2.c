#include <stdio.h>

float num,positivo,media;
int i;
int main()

{
    positivo = 0;
    media = 0;

    for(i = 0; i <=5; i++)
    {
    scanf("%f",&num);
        if(num>0)
        {
        positivo++;
        media = media + num;
        }
    }
        media = media / positivo;
    printf("%.0f valores positivos\n%.1f\n",positivo,media);
    return 0;

}
