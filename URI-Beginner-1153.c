#include<stdio.h>
int main()
{
    int N, i, NM;

    scanf("%d", &N);

    NM = N - 1;

    if(N == 0){
        printf("0\n");
    }

    else if(N == 1){
        printf("1\n");
    }

    else{
        for(i = 1; i <= NM; i++){
            N = N * i;
        }

        printf("%d\n", N);
    }

    return 0;
}
