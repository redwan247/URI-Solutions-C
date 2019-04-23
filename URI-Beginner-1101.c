#include<stdio.h>
int main()
{
    int M, N, temp, i = 1, sum;

    while(i != 0){
        scanf("%d %d", &M, &N);

        sum = 0;

        if(M < 0 || M == 0 || N < 0 || N == 0){
            i = 0;
            }

        else{
                if(M > N){
                temp = M;
                M = N;
                N = temp;
                }

        while(M <= N){
                printf("%d ", M);
                sum = sum + M;
                M++;
                }

            printf("Sum=%d\n", sum);
            }
        }

    return 0;
}
