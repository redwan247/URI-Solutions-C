#include <stdio.h>
int main() {
    
	int N = 1;
	
	while(N <= 100){
	    if(N % 2 == 0){
	      printf("%d\n", N);  
	    }
	    N++;
	}
	
	return 0;
}