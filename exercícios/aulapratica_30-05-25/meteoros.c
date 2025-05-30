#include <stdio.h>

int caiDentro(int x1,int x2,int y1,int y2, int x, int y){

	if(x<=x1 && y<=y1){
		return 1;
	} else {
		return 0;
	}

}

int main(){

	int x1, x2, y1, y2, xmeteoro, ymeteoro, n, i, res, teste;

	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	teste = 0;
	while (x1!=0 && y1!=0 && x2!=0 &&y2!=0){

		res = 0;
		scanf("%d", &n);
		for (i=0;i<n;i++){
			scanf("%d %d", &xmeteoro, &ymeteoro);
			if (caiDentro(x1, x2, y1, y2, xmeteoro, ymeteoro)==1){
				res++;
			}
		}
		teste++;
		printf("Teste %d\n", teste);
		printf("%d\n", res);
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	}

	return 0;
}