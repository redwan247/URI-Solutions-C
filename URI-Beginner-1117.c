#include<stdio.h>
int main()
{
    float X, Y, Avg;
    int i = 1, j = 1;

    while(i != 0){
        scanf("%f", &X);

        if(X < 0.00 || X > 10.00){
            printf("nota invalida\n");
        }

        else{
            while(j != 0){
                scanf("%f", &Y);
                if(Y < 0.00 || Y > 10.00){
                    printf("nota invalida\n");
                }

                else{
                    j = 0;
                    i = 0;
                }
            }
        }
    }

    Avg = (X + Y) / 2.00;

    printf("media = %0.2f\n", Avg);

    return 0;
}
