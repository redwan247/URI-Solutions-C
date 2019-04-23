#include<stdio.h>

int main()
{
    float A, B, C, MEDIA;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    A = A * 2;
    B = B * 3;
    C = C * 5;

    MEDIA = (A + B + C) / 10.0;

    printf("MEDIA = %0.1f\n", MEDIA);

    return 0;

}
