#include<stdio.h>

int main(){

	char codigo[1001];
	int i, flag, n, posicao;

	posicao = 0;
	scanf("%[^\n]", codigo);
	getchar();


	for(i=0; codigo[i] != '\0'; i++){

		/*if(codigo[i] == ' '){
			posicao--;
		}

		if((posicao %2) != 0){
			printf("%c", codigo[i]);
		}
		posicao++;*/
		if (codigo[i] == 32){
			printf("%c", 32);
			continue;
		}
		if((posicao%2)!=0){
			printf("%c", codigo[i]);
		}
		posicao++;
	}

	//printf("%s\n", codigo);
	printf("\n");

	return 0;
}