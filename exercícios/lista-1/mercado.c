#include <stdio.h>

double valorTotal(int n, double valor){

	valor = valor*n;

	return valor;
}

int main (){

	int id1, id2, qtd1, qtd2;
	double preco1, preco2, total;

	scanf("%d %d %lf", &id1, &qtd1, &preco1);
	scanf("%d %d %lf", &id2, &qtd2, &preco2);

	total = valorTotal(qtd1, preco1)+valorTotal(qtd2, preco2);

	printf("VALOR A PAGAR: R$ %.2lf\n", total);

	return 0;
}