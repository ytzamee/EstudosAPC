#include <stdio.h>

int main(){

	int rodadas, p1, pontosp1, p2, pontosp2, i;
	i=0;
	while (1){
		scanf("%d", &rodadas);
		if (rodadas == 0){
			break;
		}
		pontosp1=0;
		pontosp2=0;
		while (rodadas != 0){
			scanf("%d %d", &p1, &p2);
			if(p1>p2){
				pontosp1++;
			} else if (p2>p1){
				pontosp2++;
			}
			rodadas--;			
		}
		printf("%d %d\n", pontosp1, pontosp2);
	}

	return 0;
}