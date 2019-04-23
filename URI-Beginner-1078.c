#include<stdio.h>
int main()
{
    int N, i, S = 1;

    scanf("%d", &N);

    if(N > 2 && N < 1000){
        for(i = 0; i < 10; i++){
            printf("%d x %d = %d\n", S, N, S * N);
            S++;
        }
    }
    return 0;
}
