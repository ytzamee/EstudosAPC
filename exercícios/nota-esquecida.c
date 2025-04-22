#include <stdio.h>

int main(){

	int A, B, M;
	B = 1;
	scanf("%d%d", &A, &M);
	if (A >= 1 && A <= 100){
		if (M >= 1 && M <= 100){
			/*
			while ((A+B)/2 - M != 0){	//KKKKKKKKKKKKKKKKKKKKKKKKKKKK EU FIZ COM WHILE?? DAVA PRA SIMPLIFICAR, EU IMAGINO...
				B = B + 1;
			}
			*/
			B = 2*M - A;
			if (B >= 1 && B <= 100){
				printf("%d\n", B);
			}
		}
	}

	return 0;
}
// TÁ ERRADO!! PRECISO CORRIGIR.