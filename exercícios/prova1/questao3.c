#include <stdio.h>



int main(){

	int a, b, c, x, y, z, temp;
	int qtd;

	scanf("%d %d %d\n%d %d %d", &a, &b, &c, &x, &y, &z);

	if (a>b && x<y){
		b=temp;
		a=b;
		a=temp;
	}

	if (x>=a){
		x = x/a;
	} else {
		x=0;
	}
	if (y>=b){
		y = y/b;
	} else {
		y=0;
	}
	if (z>=c){
		z = z/c;
	} else {
		z=0;
	}

	qtd=x*y*z;

	printf("%d\n", qtd);

	return 0;
}