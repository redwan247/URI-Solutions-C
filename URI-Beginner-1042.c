#include<stdio.h>
int main()
{
    int A, B, C, E1, A1, B1, C1;

    scanf("%d %d %d", &A, &B, &C);

    A1 = A;
    B1 = B;
    C1 = C;

    if (A1 > C1){
        E1 = A1;
        A1 = C1;
        C1 = E1;
    }

    if (A1 > B1){
        E1 = A1;
        A1 = B1;
        B1 = E1;
    }

    if (B1 > C1){
        E1 = B1;
        B1 = C1;
        C1 = E1;
    }

    printf("%d\n", A1);
    printf("%d\n", B1);
    printf("%d\n", C1);
    printf("\n");
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);

    return 0;
}
