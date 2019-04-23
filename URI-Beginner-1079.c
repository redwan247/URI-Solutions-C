#include<stdio.h>
int main()
{
    int i, N;
    float A, B, C, AVG[1000];

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%f %f %f", &A, &B, &C);
        A = A * 2.00;
        B = B * 3.00;
        C = C * 5.00;

        AVG[i] =  (A + B + C) / 10.00;
    }

    for(i = 0; i < N; i++){
            printf("%0.1f\n", AVG[i]);
    }

    return 0;
}
