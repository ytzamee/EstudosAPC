#include <stdio.h>

double areaTrianguloRetangulo(double x, double y){

	x = (x*y)/2;

	return x;
}

double areaCirculo(double x, double pi){

	x = pi*(x*x);

	return x;
}

double areaTrapezio(double x, double y, double h){

	x = h*(x+y)/2;

	return x;
}

double areaQuadrado(double x){

	x=x*x;

	return x;
}

double areaRetangulo(double x, double y){

	x=x*y;

	return x;
}

int main(){

	double A, B, C, pi;

	pi = 3.14159;

	scanf("%lf %lf %lf", &A, &B, &C);

	printf("TRIANGULO: %.3lf\n", areaTrianguloRetangulo(A, C));
	printf("CIRCULO: %.3lf\n", areaCirculo(C, pi));
	printf("TRAPEZIO: %.3lf\n", areaTrapezio(A, B, C));
	printf("QUADRADO: %.3lf\n", areaQuadrado(B));
	printf("RETANGULO: %.3lf\n", areaRetangulo(A, B));

	return 0;
}