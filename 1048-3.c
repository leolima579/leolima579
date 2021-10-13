#include <stdio.h>
//wrong
float salario;
float porcentagem;
float salariofinal;
float reajuste;
main()
{

        scanf("%f",&salario);

            if(salario<=400.00)
                porcentagem = 0.15;
                else if(salario>=400.00 && salario<=800.00)
                    porcentagem = 0.12;
                        else if(salario>=800.01 && salario<=1200.00)
                            porcentagem = 0.10;
                                else if(salario>=1200.01 && salario<=2000.00)
                                    porcentagem = 0.07;
                                        else if(salario>2000.00)
                                            porcentagem = 0.04;
            salariofinal = ((salario*porcentagem)+salario);
            reajuste = salario*porcentagem;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n",salariofinal,reajuste,(porcentagem*100));


            return 0;


}
