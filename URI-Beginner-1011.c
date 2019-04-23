#include<stdio.h>
int main()
{
    int R;
    double VOLUME;

    scanf("%d", &R);

    VOLUME = (4.0 / 3.0) * 3.14159 * R * R * R;

    printf("VOLUME = %0.3lf\n", VOLUME);

    return 0;
}
