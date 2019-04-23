#include<stdio.h>
#include<string.h>
int main()
{
    int i, N, M;
    char inp[10];

    scanf("%d %d", &N, &M);

    i = N;

    while(M != 0){
        scanf("%s", inp);

        if(strcmp(inp,"fechou") == 0){
            i++;
        }
        else if(strcmp(inp, "clicou") == 0){
            i--;
        }
        M--;
    }

    printf("%d\n", i);

    return 0;
}
