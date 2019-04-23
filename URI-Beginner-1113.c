#include<stdio.h>
int main()
{
    int a, b, temp, i = 1;

    while (i != 0){
            scanf("%d %d", &a, &b);
            if(a > b){
                printf("Decrescente\n");
            }

            else if(a < b){
                printf("Crescente\n");
            }

            else{
                i = 0;
            }
    }

    return 0;
}
