#include <stdio.h>

int faseDaLua(int a,int b){

	if (b>a){

		if (b>96){
			a=1;
		} else if (b>2){
			a=2;
		} else {
			a=3;
		}

	} else if (a>b){

		if (b>96){
			a=1;
		} else if (b<3){
			a=3;
		} else {
			a=4;
		}

	} else if (a=b){
		return 1;
	}

	return a;
}

int main (){

	int dia1, dia2;

	scanf("%d %d", &dia1, &dia2);

	switch (faseDaLua(dia1, dia2)){
		case 1:
			printf("cheia\n");
			break;
		case 2:
			printf("crescente\n");
			break;
		case 3:
			printf("nova\n");
			break;
		case 4:
			printf("minguante\n");
			break;
		default:
			break;
	}

	return 0;
}