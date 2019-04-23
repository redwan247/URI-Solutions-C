#include<stdio.h>
int main()
{
    int i;
    double S = 0, t;

    for(i = 1; i <= 100; i++){
        t = 1 / (double) i;
        S = S + t;
    }

    printf("%0.2lf\n", S);

    return 0;
}
