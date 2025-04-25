#include <stdio.h>
#include <math.h>

int main(){
		
	int pares, min;

	scanf("%d", &pares);
		if (pares >= 1 && pares <= 100000){
			min = pares+1; 	/*Determina o mínimo de meias que deve ser pego*/
			printf ("%d\n", min);
		}

	return 0;
}
