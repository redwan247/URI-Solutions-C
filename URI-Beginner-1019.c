#include<stdio.h>
int main()
{
    int H, M, S, N;

    scanf("%d", &N);

    S = N % 60;
    M = N / 60;
    N = M % 60;
    H = M / 60;

    printf("%d:%d:%d\n", H, N, S);

    return 0;
}
