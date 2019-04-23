#include<stdio.h>
#include<math.h>

int main()
{
    float A, B, C, D, R1, R2;

    scanf("%f %f %f", &A, &B, &C);

    D = (B * B) - (4 * A * C);

    if(A == 0){
        printf("Impossivel calcular\n");
    }

    else if(D > 0){
        R1 = (-B + sqrt(D)) / (2 * A);
        R2 = (-B - sqrt(D)) / (2 * A);

        printf("R1 = %0.5f\n", R1);
        printf("R2 = %0.5f\n", R2);
    }

    else if( sqrt(D) < 0 ){
        printf("Impossivel calcular\n");
    }

    else{
        printf("Impossivel calcular\n");
    }

    return 0;
}
