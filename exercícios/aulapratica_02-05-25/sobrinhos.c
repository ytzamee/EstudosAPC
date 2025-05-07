#include <stdio.h>

int numDoMeio(int x, int y, int z){
    if ((x > y && x < z) || (x < y && x > z)){
        return 1;
    } else if ((y > x && y < z) || (y < x && y > z)){
        return 2;
    } else if ((z > x && z < y) || (z < x && z > y)){
        return 3;
    } else {
        return 0;
    }
}



int main(){

    int huguinho, zezinho, luisinho;

    scanf("%d %d %d", &huguinho, &zezinho, &luisinho);

    switch(numDoMeio(huguinho, zezinho, luisinho)){
        case 1:
            printf("huguinho\n");
            break;
        case 2:
            printf("zezinho\n");
            break;
        case 3:
            printf("luisinho\n");
            break;
        default:
            break;
    }

    return 0;
}