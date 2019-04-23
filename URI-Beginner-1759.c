#include<stdio.h>
int main()
{
    long int N, i = 1;

    scanf("%li", &N);

    while(i != 0){
        printf("Ho");
        if(i == N){
            i = 0;
        }

        else{
            printf(" ");
            i++;
        }
    }

    printf("!\n");

    return 0;
}
