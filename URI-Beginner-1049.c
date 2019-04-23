#include<stdio.h>
#include<string.h>
int main()
{
    char c101[15] = "vertebrado";
    char c102[15] = "invertebrado";

    char c201[15] = "ave";
    char c202[15] = "mamifero";
    char c203[15] = "inseto";
    char c204[15] = "anelideo";

    char c301[15] = "carnivoro";
    char c302[15] = "onivoro";
    char c303[15] = "onivoro";
    char c304[15] = "herbivoro";
    char c305[15] = "hematofago";
    char c306[15] = "herbivoro";
    char c307[15] = "hematofago";
    char c308[15] = "onivoro";

    char c10[15];
    char c20[15];
    char c30[15];

    scanf("%s", c10);
    scanf("%s", c20);
    scanf("%s", c30);

    if(strcmp(c10, c101) == 0){
        if(strcmp(c20,c201) == 0){
            if(strcmp(c30,c301) == 0){
                printf("aguia\n");
            }
            else if(strcmp(c30,c302) == 0){
                printf("pomba\n");
            }
        }
        else if(strcmp(c20,c202) == 0){
            if(strcmp(c30,c303) == 0){
                printf("homem\n");
            }
            else if(strcmp(c30,c304) == 0){
                printf("vaca\n");
            }
        }
    }

    else if(strcmp(c10,c102) == 0){
        if(strcmp(c20,c203) == 0){
            if(strcmp(c30,c305) == 0){
                printf("pulga\n");
            }
            else if(strcmp(c30,c306) == 0){
                printf("lagarta\n");
            }
        }
        else if(strcmp(c20,c204) == 0){
            if(strcmp(c30,c307) == 0){
                printf("sanguessuga\n");
            }
            else if(strcmp(c30,c308) == 0){
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
