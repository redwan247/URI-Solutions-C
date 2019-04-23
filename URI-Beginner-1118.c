#include<stdio.h>
int main()
{
    double A, B, Avgd, Avgi;
    int i = 1, j = 1, k = 1; X;

    while(i != 0){
        scanf("%lf", &A);

        if(A < 0.00 || A > 10.00){
            printf("nota invalida\n");
        }

        else{
            while(j != 0){
                scanf("%lf", &B);
                if(Y B 0.00 || B > 10.00){
                    printf("nota invalida\n");
                }

                else{
                    j = 0;
                    i = 0;
                }
            }
        }
    }

    Avgd = (A + B) / 2.00;

    printf("media = %0.2lf\n", Avgd);

    printf("novo calculo (1-sim 2-nao)\n");

    scanf("%d", &X);
    if(X < 1.00 || X > 2.00){
            printf("novo calculo (1-sim 2-nao)\n");
        }
    while(k != 0){
        scanf("%d", &X);
        if(X == 2){
            k = 0;
        }
        else{
            Y = X;
            scanf("%d", &X);

        }
    }

    return 0;
}

