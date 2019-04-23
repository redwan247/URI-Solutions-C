#include<stdio.h>
int main()
{
    int Alc = 0, Gas = 0, Die = 0;
    int X;

    scanf("%d", &X);

    while(X != 4){

        if(X == 1){
            Alc++;
        }
        else if(X == 2){
            Gas++;
        }
        else if(X == 3){
            Die++;
        }

        scanf("%d", &X);
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", Alc);
    printf("Gasolina: %d\n", Gas);
    printf("Diesel: %d\n", Die);

    return 0;
}
