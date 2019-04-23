#include<stdio.h>

int main()
{
    int A, B, C, D, DIFERENCA;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    A = A * B;
    C = C * D;

    DIFERENCA = A - C;

    printf("DIFERENCA = %d\n", DIFERENCA);

    return 0;

}
