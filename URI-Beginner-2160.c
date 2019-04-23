#include<stdio.h>
#include<string.h>
int main()
{
    char L[1000];
    int len;

    gets(L);

    len = strlen(L);

    if(len > 80){
        printf("NO\n");
    }

    else{
        printf("YES\n");
    }

    return 0;
}
