#include<stdio.h>
int main()
{
    int H, M, O, i;

    scanf("%d", &i);

    while(i != 0){
        scanf("%d %d %d", &H, &M, &O);

        if(O == 1){
            printf("%02d:%02d - A porta abriu!\n", H, M);
        }

        else if(O == 0){
            printf("%02d:%02d - A porta fechou!\n", H, M);
        }
        i--;
    }

    return 0;
}
