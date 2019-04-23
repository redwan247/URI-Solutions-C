#include<stdio.h>
int main()
{
    int T, V;
    float L;

    scanf("%d", &T);
    scanf("%d", &V);

    L = (V / 12.0) * T;


    printf("%0.3f\n", L);

    return 0;
}
