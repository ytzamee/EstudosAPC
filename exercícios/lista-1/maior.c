#include <stdio.h>
#include <stdlib.h>
	maiorInt(int a, int b){

	a = (a+b+abs(a-b))/2;

	return a;
}


int main (){

	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	printf("%d eh o maior\n", maiorInt(a, maiorInt(b, c)));

	return 0;
}