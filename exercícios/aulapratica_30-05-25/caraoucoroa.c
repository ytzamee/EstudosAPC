#include <stdio.h>

int main (){
	
	int i, n, joao, maria, moeda;

	scanf("%d", &n);
	while (n != 0){
		//printf("%d\n", i);
		joao = 0;
		maria = 0;
		for (i=0;i<n;i++){
			scanf("%d", &moeda);
			if (moeda==0){
				maria++;
			} else {
				joao++;
			}

		}
		printf("Mary won %d times and John won %d times\n", maria, joao);
		scanf("%d", &n);
	}

	return 0;
}