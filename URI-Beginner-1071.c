#include <stdio.h>
int main()
{
    int X, Y, temp, odd, sum = 0;

	scanf("%d", &X);
	scanf("%d", &Y);

	if(X > Y){
        temp = X;
        X = Y;
        Y = temp;
	}

	X = X + 1;

	while(X < Y){
            if(X % 2 != 0){
            sum = sum + X;
            }
            X++;
	}

	printf("%d\n", sum);

	return 0;
}
