#include<stdio.h>
int main()
{
    float A, B;

    scanf("%f", &A);

    if(A >= 0.00 && A <= 400.0){
        B = A + A * 0.15;
        A = B - A;

        printf("Novo salario: %0.2f\n", B);
        printf("Reajuste ganho: %0.2f\n", A);
        printf("Em percentual: 15 %%\n");
    }

    else if(A >= 400.01 && A <= 800.0){
        B = A + A * 0.12;
        A = B - A;

        printf("Novo salario: %0.2f\n", B);
        printf("Reajuste ganho: %0.2f\n", A);
        printf("Em percentual: 12 %%\n");
    }

    else if(A >= 800.01 && A <= 1200.0){
        B = A + A * 0.10;
        A = B - A;

        printf("Novo salario: %0.2f\n", B);
        printf("Reajuste ganho: %0.2f\n", A);
        printf("Em percentual: 10 %%\n");
    }

    else if(A >= 1200.01 && A <= 2000.0){
        B = A + A * 0.07;
        A = B - A;

        printf("Novo salario: %0.2f\n", B);
        printf("Reajuste ganho: %0.2f\n", A);
        printf("Em percentual: 7 %%\n");
    }

    else if(A > 2000.0){
        B = A + A * 0.04;
        A = B - A;

        printf("Novo salario: %0.2f\n", B);
        printf("Reajuste ganho: %0.2f\n", A);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
