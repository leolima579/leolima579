#include <stdio.h>

main()

{
    float N,mediafinal,media,exame;
    media = 0;
    mediafinal = 0;
    exame = 0;

        scanf("%f",&N);
        media = media+N*2;

        scanf("%f",&N);
        media = media+N*3;

        scanf("%f",&N);
        media = media+N*4;

        scanf("%f",&N);
        media = media+N;

        mediafinal = media/10;

        if(mediafinal >= 7.0)
        {
        printf("Media: %.1f\nAluno aprovado.\n",mediafinal);
        }

        if(mediafinal>=5.0 && mediafinal <=6.9)
        {
            printf("Media: %.1f\n",mediafinal);
            printf("Aluno em exame.\n");
            scanf("%f",&exame);
            printf("Nota do exame: %.1f\n",exame);
            mediafinal = (mediafinal+exame)/2;
            if(mediafinal >= 5.0)
                {
                 printf("Aluno aprovado.\n");
                printf("Media final: %.1f\n",mediafinal);
                }
        }

            if(mediafinal <=4.9){
            printf("Media: %.1f\n",mediafinal);
            printf("Aluno reprovado.\n");
            }




    return 0;
}

//
