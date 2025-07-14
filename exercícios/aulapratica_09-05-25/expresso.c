#include <stdio.h>
#include <stdlib.h>

int valor_minimo(int a, int b){
    if(a<=b){
        return a;
    } else {
        return b;
    }
}

int main(){

    int andar[3], i, j, custo[3], ans;
    i = 0;
    j = 0;
    ans = 0;
    //zerando os vetores
    for(i=0;i<3;i++){
        andar[i] = 0;
        custo[i] = 0;
    }

    for(i=0;i<3;i++){
        scanf("%d", &andar[i]);
    }

    //decidindo o gasto em cada andar
    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            custo[i] += andar[j]*(abs(i-j));
        
        }
        //debugando
        //printf("Custo do andar %d = %d\n", i, custo[i]);
    }

    //decidindo o menor resultado para responder
    ans = 2*valor_minimo(custo[0], valor_minimo(custo[1], custo[2]));
    //porque eu tive que multiplicar o resultado por 2?? NAO faco a minima ideia

    printf("%d\n", ans);

    return 0;
}