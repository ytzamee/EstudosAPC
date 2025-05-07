#include <stdio.h>

int main(){

    int decolagem, viagem, horario, total;

    scanf("%d %d %d", &decolagem, &viagem, &horario);
    
    total = decolagem + viagem + horario;
    
    if (total >= 24){
        total = total - 24;
    } else if (total < 0){
        total = total + 24;
    }

    printf("%d\n", total);

    return 0;
}