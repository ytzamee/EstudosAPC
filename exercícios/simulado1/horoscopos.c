#include <stdio.h>


int main(){

	int dia, mes;
	scanf("%d %d", &dia, &mes);


	if (mes == 1){
		if (dia <= 19){
			printf("capricornio\n");
		} else {
			printf("aquario\n");
		}
	}
	if (mes == 2){
		if (dia <= 18){
			printf("aquario\n");
		} else {
			printf("peixes\n");
		}
	}
	if (mes == 3){
		if (dia <= 20){
			printf("peixes\n");
		} else {
			printf("aries\n");
		}
	}
	if (mes == 4){
		if (dia <= 20){
			printf("aries\n");
		} else {
			printf("touro\n");
		}
	}
	if (mes == 5){
		if (dia <= 20){
			printf("touro\n");
		} else {
			printf("gemeos\n");
		}
	}
	if (mes == 6){
		if (dia <= 20){
			printf("gemeos\n");
		} else {
			printf("cancer\n");
		}
	}
	if (mes == 7){
			if (dia <= 22){
				printf("cancer\n");
			} else {
				printf("lea0\n");
			}
		}
	if (mes == 8){
		if (dia <= 22){
			printf("leao\n");
		} else {
			printf("virgem\n");
		}
	}
	if (mes == 9){
		if (dia <= 22){
			printf("virgem\n");
		} else {
			printf("libra\n");
		}
	}
	if (mes == 10){
		if (dia <= 22){
			printf("libra\n");
		} else {
			printf("escorpiao\n");
		}
	}
	if (mes == 11){
		if (dia <= 21){
			printf("escorpiao\n");
		} else {
			printf("sagitario\n");
		}
	}
	if (mes == 12){
		if (dia <= 21){
			printf("sagitario\n");
		} else {
			printf("capricornio\n");
		}
	}

}
