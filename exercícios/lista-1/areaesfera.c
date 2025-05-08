#include <stdio.h>

double volumeDaEsfera(double x, double pi){

	x = (4.0/3)*pi*(x*x*x);
	return x;
}

int main(){

	double raio, pi, volume;

	scanf("%lf", &raio);

	pi = 3.14159;

	volume = volumeDaEsfera(raio, pi);

	printf("VOLUME = %.3lf\n", volume);

	return 0;
}