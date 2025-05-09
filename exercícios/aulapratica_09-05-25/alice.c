#include <stdio.h>

void quemGanhou (char a, char b, char c){

	if(a='X'){

		if (a==b){
			printf('Alice');
		} else if (b==c && b=='O'){
			printf('Bob');
		} else {
			printf('*')
		}

	} else {
		printf('?');
	}

}

int main (){

	char a, b, c;

	scanf("%c %c %c", &a, &b, &c);

	quemGanhou(a, b, c);

	return 0;
}