#include <stdio.h>
#include <math.h>

int main(){
	
	int xm, ym, xr, yr, ans;

	scanf("%d %d %d %d", &xm, &ym, &xr, &yr);

	ans=fabs(xr-xm)+fabs(yr-ym);

	printf("%d\n", ans);

	return 0;
}