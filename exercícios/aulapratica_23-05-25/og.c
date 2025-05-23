#include <stdio.h>

int main(){

	int l, r, x;

	x=scanf("%d %d", &l, &r);

	while (x != EOF){

		l += r;
		if (l==0){
			break;
		}
		printf("%d\n", l);

		x=scanf("%d %d", &l,&r);
	}

	return 0;
}