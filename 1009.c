#include <stdio.h>

int main() {
char N;
double B,S,SF;
    scanf("%s%lf%lf",&N,&B,&S);
        SF = (B+(S *0.15));
            printf("TOTAL = R$ %.2f\n",SF);

    return 0;
}
