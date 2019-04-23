#include<stdio.h>
int main()
{
    int X, i = 1;

    while(i != 0){
        scanf("%d", &X);

        if(X == 0){
            i = 0;
        }

        else{
            i = 1;
            while(i != X + 1 ){
                printf("%d", i);
                i++;

                if(i != X + 1){
                    printf(" ");
                    }
                }
                printf("\n");
            }
        }

    return 0;
}
