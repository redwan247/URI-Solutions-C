#include<stdio.h>
int main()
{
    int X;
    float Y, RES;

    scanf("%d", &X);
    scanf("%f", &Y);

    RES = X / Y;

    printf("%0.3f km/l", RES);

    return 0;
}
