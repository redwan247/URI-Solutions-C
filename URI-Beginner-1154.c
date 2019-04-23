#include<stdio.h>
int main()
{
    int N, i = 1, j = 0;
    float avg, m = 0.0;

    while(i != 0){
        scanf("%d", &N);

        if(N < 0){
            i = 0;
        }

        else{
            m = m + N;
            j++;
        }
    }


    avg = m / j;

    printf("%0.2f\n", avg);

    return 0;
}
