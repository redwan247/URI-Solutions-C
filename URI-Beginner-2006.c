#include<stdio.h>
int main()
{
    int T, A, B, C, D, E, i = 0;

    scanf("%d", &T);

    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

    if(A == T)
        i++;
    if(B == T)
        i++;
    if(C == T)
        i++;
    if(D == T)
        i++;
    if(E == T)
        i++;

    printf("%d\n", i);

    return 0;
}
