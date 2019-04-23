#include<stdio.h>
int main()
{
    int A, B, E, F;
    double C, G, VALOR;

    scanf("%d %d %lf", &A, &B, &C);
    scanf("%d %d %lf", &E, &F, &G);

    C = B * C;
    G = F * G;

    VALOR = C + G;

    printf("VALOR A PAGAR: R$ %0.2lf\n", VALOR);

    return 0;
}
