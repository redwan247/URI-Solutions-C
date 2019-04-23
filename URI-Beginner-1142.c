#include<stdio.h>
int main()
{
    int i, k = 1, N;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
            printf("%d %d %d PUM\n", k, k + 1, k +2);
            k = k + 4;
    }

    return 0;
}
