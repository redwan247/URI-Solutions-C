#include<stdio.h>
int main()
{
    int i, LOC, MAX, N[101];

    for(i = 1; i <= 100; i++){
        scanf("%d", &N[i]);
    }

    i = 1;
    LOC = 1;
    MAX = N[i];

    while(i <= 100){
        if(MAX < N[i]){
            LOC = i;
            MAX = N[i];
        }
    i++;
    }

    printf("%d\n", MAX);
    printf("%d\n", LOC);

    return 0;
}
