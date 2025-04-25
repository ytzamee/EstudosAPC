#include <stdio.h>

int main(){
	
	int anos, meses, dias, resto;

	scanf("%d", &dias);

	/*
	while (dias >= 365){
		anos = anos + 1;
		dias = dias -365;
	}
	while (dias >= 30 && dias < 365){
		meses = meses + 1;
		dias = dias - 30;
	}
	*/

	anos = dias/365;
	resto = dias%365;

	meses = resto/30;
	resto = resto%30;

	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", resto);

	return 0;
}