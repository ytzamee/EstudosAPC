#include <stdio.h>

int ehMaior(int a, int b){

    if (a>b){
        return a;
    } else if (a<=b){
        return b;
    }
}
int ehMenor(int a, int b){

    if (a<b){
        return a;
    } else if (a>=b){
        return b;
    }
}


int main(){

    int x, y, z, xtemp, ytemp, ztemp;

    scanf("%d %d %d", &x, &y, &z);


    xtemp = ehMenor(x, ehMenor(y, z));
    ztemp = ehMaior(x, ehMaior(y, z));
    ytemp = (x+y+z)-(xtemp+ztemp);

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", xtemp, ytemp, ztemp, x, y, z);

    return 0;
}
