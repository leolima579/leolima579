#include <stdio.h>

main()

{
    int pw;

    do
    {
        scanf("%d",&pw);

        if(pw==2002)
        {
            printf("Acesso Permitido\n");
        }
        else
        {
            printf("Senha Invalida\n");
        }

    }while(pw!=2002);




    return 0;
}
