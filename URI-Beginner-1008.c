#include<stdio.h>

int main()
{
    int emp, hr;
    float pay, sal;

    scanf("%d", &emp);
    scanf("%d", &hr);
    scanf("%f", &pay);

    sal = hr * pay;

    printf("NUMBER = %d\n", emp);
    printf("SALARY = U$ %0.2f\n", sal);

    return 0;
}
