#include <stdio.h>
int main()
{
	float n[10];
	int pos = 0, i;

	for(i = 0; i < 6; i++){
	    scanf("%f", &n[i]);

	    if(n[i] > 0.0){
	    pos++;
	    }
    }

	printf("%d valores positivos\n", pos);

	return 0;
}
