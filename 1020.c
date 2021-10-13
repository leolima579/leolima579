#include <stdio.h>
#include <math.h>

int main() {
    int valor,a,m,d;
    scanf("%d",&valor);
    a = valor/365;
    m = fmod(valor,365);
    d = fmod(m,30);
    m = m/30;
        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,m,d);

    return 0;
}

