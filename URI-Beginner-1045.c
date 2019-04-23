#include<stdio.h>
int main()
{
    double A, B, C, E1;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (A < C){
        E1 = A;
        A = C;
        C = E1;
    }

    if (A < B){
        E1 = A;
        A = B;
        B = E1;
    }

    if (B < C){
        E1 = B;
        B = C;
        C = E1;
    }

    if(A >= B + C){
        printf("NAO FORMA TRIANGULO\n");
    }

    else if( (A * A) == (B * B + C * C)){
            printf("TRIANGULO RETANGULO\n");
    }

    else if( (A * A) > (B * B + C * C)){
        printf("TRIANGULO OBTUSANGULO\n");
    }

    else if( (A * A) < (B * B + C * C)){
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(A == B && A == C && B == C){
        printf("TRIANGULO EQUILATERO\n");
    }

    else if( A == B & A != C){
        printf("TRIANGULO ISOSCELES\n");
    }

    else if(A == C & A != B){
        printf("TRIANGULO ISOSCELES\n");
    }

    else if(B == C & B != A){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
