#include <stdio.h>

double mediaComPeso(double x, double y, double z, double media){

	media = (x*2+y*3+z*5)/10;

	return media;

}

int main (){

	double A, B, C, media;

	scanf("%lf %lf %lf", &A, &B, &C);

	printf("MEDIA = %.1lf\n", mediaComPeso(A, B, C, media));

	return 0;
}