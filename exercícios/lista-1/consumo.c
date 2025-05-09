#include <stdio.h>

double quantoGasto(int x, double y){
	y = x/y;
	return y;
}

int main(){
	int km;
	double litros;

	scanf("%d %lf", &km, &litros);
	printf("%.3lf km/l\n", quantoGasto(km, litros));

	return 0;
}