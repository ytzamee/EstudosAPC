#include <stdio.h>
int main(){
	
	int L, C, worb;

	scanf("%d%d", &L, &C);
	worb = 0;
	L = L%2;
	C = C%2;
	if (L == C){
		worb = 1;
	}

	printf("%d\n", worb);

	return 0;
}