#include<stdio.h>
int main()
{
    int X, Y, temp;

    scanf("%d", &X);
    scanf("%d", &Y);

    if(X > Y){
        temp = X;
        X = Y;
        Y = temp;
    }

    X = X + 1;

    while(X < Y){
        if(X % 5 == 2 || X % 5 == 3){
            printf("%d\n", X);
        }
        X++;
    }

    return 0;
}
