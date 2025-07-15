#include <stdio.h>

int main(){
	
	int n, i, n1, n2;
	char c;

	scanf("%d", &n);

	for(i=0;i<n;i++){
		scanf("%d%c%d", &n1, &c, &n2);
		getchar();
		if(n1==n2){
			n1=n1*n2;
			printf("%d\n", n1);
		} else if(c>=64 && c<=90){
			n1=n2-n1;
			printf("%d\n", n1);
		} else if(c>=97 && c<=122){
			n1=n1+n2;
			printf("%d\n", n1);
		}
	}

	return 0;
}