#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int pulo, n, i, dist;
	int canos[100];

	scanf("%d %d", &pulo, &n);

	for (i=0;i<n;i++){
		scanf("%d", &canos[i]);
		}
	for (i=0;i<n;i++){
		dist=canos[i]-pulo;
		dist=abs(dist);
		if (dist>=pulo){
			printf("GAME OVER\n");
			break;
		}
	}
	if (i==n){
		printf("YOU WIN\n");
	}

	return 0;
}

//**CORRIGIR E TERMINAR ESSE CODIGO**