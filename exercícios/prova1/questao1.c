#include <stdio.h>



int main(){
	
	int km, km2, dist, custo, custoP, n;

	n = 0; //setando a variável (quantidade de pedágios)
	scanf("%d %d\n%d %d", &km, &dist, &custo, &custoP);
	km2 = km;
	n = km/dist;
	/*
	while (km2 >= dist){
		n++;
		km2 = km2-dist;
	} 
	*/

	custo = custo*km+custoP*n;

	printf("%d\n", custo);


	return 0;
}
//como simplificar? n = km/dist?