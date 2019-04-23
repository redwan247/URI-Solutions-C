#include<stdio.h>
int main()
{
    char T[1000];
    int len;

    gets(T);

    len = strlen(T);

    if(len > 140){
        printf("MUTE\n");
    }

    else{
        printf("TWEET\n");
    }

    return 0;
}
