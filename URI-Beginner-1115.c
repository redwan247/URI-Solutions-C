#include<stdio.h>
int main()
{
    int X, Y, i = 1;

    while(i != 0){
        scanf("%d %d", &X, &Y);

        if(X == 0 || Y == 0){
            i = 0;
        }

        else{
            if(X > 0 && Y > 0){
                printf("primeiro\n");
            }

            else if(X > 0 && Y < 0){
                printf("quarto\n");
            }

            else if(X < 0 && Y > 0){
                printf("segundo\n");
            }

            else if(X < 0 && Y < 0){
                printf("terceiro\n");
            }
        }
    }

    return 0;
}
