#include <stdio.h>
int main(){
	
	int n, brancas, pretas;

	if (n%2==0){
		brancas = n;
		pretas = n;
	} else {
		brancas = n+1;
		pretas = n;
	}
	printf("%d casas brancas e %d casas pretas\n", brancas, pretas);

	return 0;
}