#include <stdio.h>

int main(){
	
	int galhos, bolinhas;

	scanf("%d%d", &bolinhas, &galhos);
	galhos = galhos/2;
	if (bolinhas >= galhos){
		printf("Amelia tem todas bolinhas!\n");
	}
	else {
		bolinhas = galhos-bolinhas;
		printf ("Faltam %d bolinha(s)\n", bolinhas);
	}


	return 0;
}