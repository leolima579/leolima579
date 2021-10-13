#include <stdio.h>
#include <math.h>

main(){

float N,troco,Vatual;
int val;

        scanf("%f",&N);

        Vatual = fmod(N,100);
        val = Vatual;
        printf("%d nota(s) de R$ 100,00\n",val);

        Vatual = (fmod(Vatual,50)-val);
        val = Vatual;
        printf("%d nota(s) de R$ 50,00\n",val);






    return 0;
}
