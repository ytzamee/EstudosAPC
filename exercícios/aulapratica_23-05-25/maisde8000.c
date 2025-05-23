#include <stdio.h> 

int main(){
	
	int poder, x, i;

	scanf("%d", &x);
	i = 0;
	while (i++ < x){
		scanf("%d", &poder);
		if (poder>8000){
			printf("Mais de 8000!\n");
		} else {
			printf("Inseto!\n");
		}
	}

	return 0;
}
