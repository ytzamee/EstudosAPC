#include <stdio.h>

int main(){

	int limite, n1, n2;
	char operador;

	scanf("%d", &limite);
	getchar();
	scanf("%d %c %d", &n1, &operador, &n2);

	
	switch(operador){
		case '+':
			n1 = n1+n2;
			break;
		case '*':
			n1 = n1*n2;
			break;
	}
	if(n1 > limite){
		printf("OVERFLOW\n");
	} else {
		printf("OK\n");
	}
	return 0;
}