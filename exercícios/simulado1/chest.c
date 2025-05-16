#include <stdio.h>


int main(){

	double x, y, z, r,area, areaCirculo, areaTriangulo;

	scanf("%lf %lf %lf", &x, &y, &z);

	r = z/2;

	areaCirculo = (3*r*r)/2;

	areaTriangulo = (y*z/2);

	area = areaTriangulo+areaCirculo;


	if (x*x==y*y+z*z){
		printf("AREA = %.00lf\n", area);
	} else{
		printf("Nao eh retangulo!\n");
	}

	return 0;
}
