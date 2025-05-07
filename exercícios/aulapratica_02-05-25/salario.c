#include <stdio.h>

int main(){

    double salario, reajuste, percentual;

    scanf("%lf", &salario);
    
    if(salario >= 0.00 && salario <= 400.00){
        percentual = 15;
        reajuste = salario * (percentual/100);
        salario = salario + reajuste;

    } else if (salario > 400.00 && salario <= 800.00){
        percentual = 12;
        reajuste = salario * (percentual/100);
        salario = salario + reajuste;
    } else if (salario > 800.00 && salario <= 1200.00){
        percentual = 10;
        reajuste = salario * (percentual/100);
        salario = salario + reajuste;
    } else if (salario > 1200.00 && salario <= 2000.00){
        percentual = 7;
        reajuste = salario * (percentual/100);
        salario = salario + reajuste;
        
    } else {
        percentual = 4;
        reajuste = salario * (percentual/100);
        salario = salario + reajuste;
    }

    printf("Novo salario: %.2lf\n", salario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %.0lf %%\n", percentual);
    
    return 0;
}