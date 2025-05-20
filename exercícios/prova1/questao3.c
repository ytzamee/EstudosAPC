#include <stdio.h>



int main(){

	int a, b, c, x, y, z;
	int qtd;

	scanf("%d %d %d\n%d %d %d", &a, &b, &c, &x, &y, &z);

	if (x>=a && y>=b && z>=c){
		x = x/a;
		y = y/b;
		z = z/c;

		qtd=x*y*z;
	} else {
		qtd=0;
	}

	printf("%d\n", qtd);

	return 0;
}
