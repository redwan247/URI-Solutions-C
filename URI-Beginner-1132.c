#include<stdio.h>
int main()
{
	int X, Y, temp, sum = 0;
	
	scanf("%d %d", &X, &Y);
	
	if(X > Y){
		temp = X;
		X = Y;
		Y = temp;
	}
	
	while(X <= Y){
		if( X % 13 != 0){
			sum = sum + X;
		}
		X++;
	}
		
	printf("%d\n", sum);
	
	return 0;

}