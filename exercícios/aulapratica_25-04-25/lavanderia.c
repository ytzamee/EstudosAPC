#include <stdio.h>

int main(){
	
	int topo, base, area, areacorte;
	area = (70*160)/2;

	scanf("%d, %d", base, topo);

	areacorte = (topo+base)*35;

	if (areacorte == area){
		printf("0");
	} else {
		if (areacorte < area){
			printf("1");
		} else {
			if (areacorte > area){
				printf("2");
			}
		}
	}
	return 0;
}