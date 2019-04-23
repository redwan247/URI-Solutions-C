#include<stdio.h>
int main()
{
    int st, et, dur = 0, temp;

    scanf("%d %d", &st, &et);

    if(st == 0 && et == 0){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

    else if(st < et){
        while(st < et){
            dur++;
            st++;
        }

        printf("O JOGO DUROU %d HORA(S)\n", dur);
    }

    else{
        while(st < 24){
            dur++;
            st++;
        }

        temp = 0;

        while(temp < et){
            dur++;
            temp++;
        }

        printf("O JOGO DUROU %d HORA(S)\n", dur);
    }


    return 0;
}
