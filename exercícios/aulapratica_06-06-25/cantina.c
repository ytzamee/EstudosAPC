#include<stdio.h>


int main(){

    int i, j, n, m, temp, ans;
    int fila[1000], filabackup[1000];
    scanf("%d", &n);

    while (n>0){
        scanf("%d", &m);
        for(i=0;i<m;i++){
            scanf("%d", &fila[i]);
            filabackup[i]=fila[i];
            //printf("%da posicao eh: %d\n", i, fila[i]);
            //printf("%da pos do backup eh: %d\n", filabackup[i]);
        }
        //selection sort
        //printf("A fila ordenada eh:\n");
        for(i=0;i<m;i++){
           for(j=i+1;j<m;j++){
                if (fila[i]<fila[j]){
                    temp=fila[i];
                     fila[i]=fila[j];
                     fila[j]=temp;
                }
           }
           //printf("\t%d pos: %d\n", i, fila[i]);
        }
        //inicializando a variavel de saída
        ans=0;
        //contabilizando os alunos que não trocaram de lugar
        for (i=0;i<m;i++){
            if(fila[i]==filabackup[i]){
                ans++;
            }
        }
        printf("%d\n", ans);

        n--;
    }

    return 0;
}