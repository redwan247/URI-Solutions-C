#include <stdio.h>
int main()
{
	float n[10], sum = 0.00, avg;
	int pos = 0, i;

	for(i = 0; i < 6; i++){
	    scanf("%f", &n[i]);

	    if(n[i] > 0.0){
	    pos++;
	    sum = sum + n[i];
	    }
    }

    avg = sum / pos;

	printf("%d valores positivos\n", pos);
	printf("%0.1f\n", avg);

	return 0;
}
