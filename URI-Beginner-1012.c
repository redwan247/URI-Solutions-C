#include<stdio.h>
int main()
{
    float A, B, C;
    float TRI, CIR, TRAP, QUAD, RECT;

    scanf("%f %f %f", &A, &B, &C);

    TRI = (1.0/2.0) * A * C;
    CIR = 3.14159 * C * C;
    TRAP = (A+B) / 2.0 * C;
    QUAD = B * B;
    RECT = A * B;

    printf("TRIANGULO: %0.3f\n", TRI);
    printf("CIRCULO: %0.3f\n", CIR);
    printf("TRAPEZIO: %0.3f\n", TRAP);
    printf("QUADRADO: %0.3f\n", QUAD);
    printf("RETANGULO: %0.3f\n", RECT);

    return 0;
}
