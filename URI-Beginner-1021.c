#include<stdio.h>
int main()
{
    double N, B, C, D, E, F, G, H, I, J, K, L;
    int A;

    scanf("%lf", &N);
    A = N / 100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", A);

    B = N - (A * 100);
    A = B / 50.0;
    printf("%d nota(s) de R$ 50.00\n", A);

    C = B - ( A * 50);
    A = C / 20.0;
    printf("%d nota(s) de R$ 20.00\n", A);

    D = C - ( A * 20);
    A = D / 10.0;
    printf("%d nota(s) de R$ 10.00\n", A);

    E = D - ( A * 10);
    A = E / 5.0;
    printf("%d nota(s) de R$ 5.00\n", A);

    F = E - ( A * 5);
    A = F / 2.0;
    printf("%d nota(s) de R$ 2.00\n", A);

    printf("MOEDAS:\n");

    G = F - (A * 2);
    A = G / 1.0;
    printf("%d moeda(s) de R$ 1.00\n", A);

    H = G - (A * 1);
    A = H / 0.50;
    printf("%d moeda(s) de R$ 0.50\n", A);

    I = H - (A * 0.50);
    A = I / 0.25;
    printf("%d moeda(s) de R$ 0.25\n", A);

    J = I - (A * 0.25);
    A = J / 0.10;
    printf("%d moeda(s) de R$ 0.10\n", A);

    K = J - (A * 0.10);
    A = K / 0.05;
    printf("%d moeda(s) de R$ 0.05\n", A);

    L = K - (A * 0.05);
    A = L / 0.01;
    printf("%d moeda(s) de R$ 0.01\n", A);

    return 0;
}
