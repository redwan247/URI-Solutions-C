#include<stdio.h>
int main()
{
    int X, Y;
    float P;

    scanf("%d %d", &X, &Y);

    if(X == 1){
        P = 4.00 * Y;
        printf("Total: R$ %0.2lf\n", P);
    }

    else if(X == 2){
        P = 4.50 * Y;
        printf("Total: R$ %0.2lf\n", P);
    }

    else if(X == 3){
        P = 5.00 * Y;
        printf("Total: R$ %0.2lf\n", P);
    }

    else if(X == 4){
        P = 2.00 * Y;
        printf("Total: R$ %0.2lf\n", P);
    }

    else if(X == 5){
        P = 1.50 * Y;
        printf("Total: R$ %0.2lf\n", P);
    }

    return 0;
}
