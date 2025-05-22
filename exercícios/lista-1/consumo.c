#include <stdio.h>

int main(){
	
	int km;
	double l;

	scanf("%d\n%lf", &km, &l);

	l = km/l;

	printf("%.3lf km/l\n", l);

	return 0;
}