#include <stdio.h>

int main(){
	
	int horas, minutos, segundos, resto;

	scanf("%d", &segundos);

	/*if (segundos >= 0){
		while (segundos >= 3600){
			horas = horas+1;
			segundos = segundos-3600;
		}
		while(segundos >= 60){
			minutos = minutos+1;
			segundos = segundos-60;

		}

	}
	if (segundos < 0){
		while (segundos <= -3600){
			horas = horas -1;
			segundos = segundos+3600;
		}
		while (segundos <= -60){
			minutos = minutos-1;
			segundos = segundos+60;
		}
	}*/

	horas = segundos/3600;
	resto = segundos%3600;

	minutos = resto/60;
	segundos = resto%60;

	printf("%d:%d:%d\n", horas, minutos, segundos);
	return 0;
}