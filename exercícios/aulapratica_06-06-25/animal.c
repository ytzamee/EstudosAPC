#include <stdio.h>
#include <string.h>

int main(){

    char animal[1001], classe[1001], dieta[1001];

    scanf("%s", animal);
    getchar();
    scanf("%s", classe);
    getchar();
    scanf("%s", dieta);
    getchar();

    if (strlen(animal) == 10){
        if (strlen(classe) == 3){
            if (strlen(dieta) == 9){
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {
            if (strlen(dieta) == 7){
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }
    } else {
        if (strlen(classe) == 6){
            if (strlen(dieta) == 10){
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        } else {
            if (strlen(dieta) == 10){
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }

}