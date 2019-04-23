#include <stdio.h>
int main()
{
    int n, odd = 0;
	scanf("%d", &n);

	while(odd < 6){
            if(n % 2 != 0){
            printf("%d\n", n);
            odd++;
            }
    n++;
	}

	return 0;
}
