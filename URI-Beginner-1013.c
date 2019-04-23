// LARGEST NUMBER

#include<stdio.h>
#include<math.h>
int main()
{
    int A, B, C, MAX;

    scanf("%d %d %d", &A, &B, &C);

    A = (A+B+abs(A-B)) / 2;

    MAX = (A+C+abs(A-C)) / 2;

    printf("%d eh o maior\n", MAX);

    return 0;
}
