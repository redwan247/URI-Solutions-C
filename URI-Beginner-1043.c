#include<stdio.h>
int main()
{
    float A, B, C, Area, Peri;

    scanf("%f %f %f", &A, &B, &C);

    if((A + B) > C && (A + C) > B && (B + C) > A){
        Peri = A + B + C;
        printf("Perimetro = %0.1f\n", Peri);
    }

    else{
        Area = 0.5 * (A + B) * C;
        printf("Area = %0.1f\n", Area);
    }

    return 0;
}
