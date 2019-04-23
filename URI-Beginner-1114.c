#include<stdio.h>
int main()
{
    int X, i = 1;

    while(i != 0){
        scanf("%d", &X);

        if(X != 2002){
            printf("Senha Invalida\n");
        }

        else{
            printf("Acesso Permitido\n");
            i = 0;
        }
    }

    return 0;
}
