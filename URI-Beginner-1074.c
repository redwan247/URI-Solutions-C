#include<stdio.h>
int main()
{
    int N, i, X[1000];

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &X[i]);
    }

    for(i = 0; i < N; i++){
        if(X[i] == 0){
            printf("NULL\n");
        }

        else if(X[i] > 0){
            if(X[i] % 2 == 0){
                printf("EVEN POSITIVE\n");
            }
            else{
                printf("ODD POSITIVE\n");
            }
        }

        else{
            if(X[i] % 2 == 0){
                printf("EVEN NEGATIVE\n");
            }
            else{
                printf("ODD NEGATIVE\n");
            }
        }
    }

    return 0;
}
