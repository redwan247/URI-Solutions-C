#include<stdio.h>
int main()
{
    int X, Y, N, i;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d %d", &X, &Y);

        if(Y == 0){
            printf("divisao impossivel\n");
        }

        else if(X == 0){
            printf("0.0\n");
        }

        else{
            printf("%0.1f\n", (float)X / (float)Y);
        }
    }
    return 0;
}
