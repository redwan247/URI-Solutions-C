#include<stdio.h>
int main()
{
    int T, i = 0;
    long long int R1, R2;

    scanf("%d", &T);

    while(i != T){
        scanf("%lli %lli", &R1, &R2);
        printf("%lli\n", R1+R2);
        i++;
    }

    return 0;
}
