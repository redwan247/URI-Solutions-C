#include<stdio.h>
int main()
{
    int N, i;
    long int X[100];
    int in = 0, out = 0;

    scanf("%d", &N);

    while(N > 0){
        scanf("%d", &X[i]);
        if(X[i] >= 10 && X[i] <=20){
            in++;
        }
        else{
            out++;
        }
        N--;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
