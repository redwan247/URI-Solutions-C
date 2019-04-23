#include<stdio.h>

int main()
{
    double B, C, D, E, F, G;
    int A, N;

    scanf("%d", &N);
	printf("%d\n", N);
	

    A = N / 100;
    printf("%d nota(s) de R$ 100,00\n", A);

    B = N - (A * 100);
    A = B / 50.0;
    printf("%d nota(s) de R$ 50,00\n", A);

    C = B - ( A * 50);
    A = C / 20.0;
    printf("%d nota(s) de R$ 20,00\n", A);

    D = C - ( A * 20);
    A = D / 10.0;
    printf("%d nota(s) de R$ 10,00\n", A);

    E = D - ( A * 10);
    A = E / 5.0;
    printf("%d nota(s) de R$ 5,00\n", A);

    F = E - ( A * 5);
    A = F / 2.0;
    printf("%d nota(s) de R$ 2,00\n", A);

    G = F - (A * 2);
    A = G / 1.0;
    printf("%d nota(s) de R$ 1,00\n", A);

    return 0;
}
