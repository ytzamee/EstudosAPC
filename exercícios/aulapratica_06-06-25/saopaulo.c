#include<stdio.h>
#include<string.h>

int main(){

	int n, i, j, flag = 0;
	char placa[101];

	scanf("%d", &n);

	for(i=0;i<n;i++){

		scanf("%s", placa);
		getchar();

		//checando os três primeiros caracteres
		for(j=0;j<3;j++){
			if(placa[i]<65||placa[i]>90){
				flag = 1;
			}
		}
		//checando os quatro últimos caracteres
		for(j=0;j<4;j++){
			if (placa[i+4]<48 || placa[i+4]>57){
				flag = 1;
			}
		}
		//checando a posicao do hifen
		if(placa[3]!='-'){
			flag = 1;
		}
		//checando se a placa excede o maximo de caracteres
		if(strlen(placa) > 8){
			flag = 1;
		}
		//uso de variavel flag pra não repetir impressão
		if(flag == 1){
			printf("FAILURE\n");
			flag = 0;
			continue;
		}
		switch(placa[7]){
			case '1':
				printf("MONDAY\n");
				break;
			case '2':
				printf("MONDAY\n");
				break;
			case '3':
				printf("TUESDAY\n");
				break;
			case '4':
				printf("TUESDAY\n");
				break;
			case '5':
				printf("WEDNESDAY\n");
				break;
			case '6':
				printf("WEDNESDAY\n");
				break;
			case '7':
				printf("THURSDAY\n");
				break;
			case '8':
				printf("THURSDAY\n");
				break;
			case '9':
				printf("FRIDAY\n");
				break;
			case '0':
				printf("FRIDAY\n");
				break;
		}
	}

	return 0;
}