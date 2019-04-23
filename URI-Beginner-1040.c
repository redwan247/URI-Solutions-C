#include<stdio.h>
int main()
{
    float N1, N2, N3, N4, Next, Avg, Avgf;

    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    N1 = N1 * 2;
    N2 = N2 * 3;
    N3 = N3 * 4;
    N4 = N4 * 1;

    Avg = (N1 + N2 + N3 + N4) / 10.00;

    printf("Media: %0.1f\n", Avg);

    if(Avg >= 7.0){
        printf("Aluno aprovado.\n");
    }

    else if(Avg < 5.00){
        printf("Aluno reprovado.\n");
    }

    else if(Avg >= 5.0 && Avg <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%f", &Next);
        printf("Nota do exame: %0.1f\n", Next);
        Avg = (Avg + Next) / 2;

        if(Avg >= 5.00){
            printf("Aluno aprovado.\n");
        }

        else if(Avg <= 4.9){
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %0.1f\n", Avg);

    }

    return 0;
}
