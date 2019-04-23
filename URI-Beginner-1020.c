#include<stdio.h>
int main()
{
    int Y, M, D, N;

    scanf("%d", &N);

    Y = N / 365;
    M = N % 365;
    N = M / 30;
    D = M % 30;

    printf("%d ano(s)\n", Y);
    printf("%d mes(es)\n", N);
    printf("%d dia(s)\n", D);

    return 0;
}
