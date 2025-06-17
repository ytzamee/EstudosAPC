#include<stdio.h>

int main(){
	
	int conector1[5], conector2[5];
	int i;

	for(i=0;i<5;i++){
		scanf("%d", &conector1[i]);
	}
	for(i=0;i<5;i++){
		scanf("%d", &conector2[i]);
	}

	for (i=0;i<5;i++){
		if (conector2[i]==0){
			conector2[i]= 1;
		} else {
			conector2[i]= 0;
		}
	}

	for (i=0;i<5;i++){
		if (conector1[i]!=conector2[i]){
			printf("N\n");
			break;
		}
	}
	if (i==5){
	printf("Y\n");
	}
	

	return 0;
}