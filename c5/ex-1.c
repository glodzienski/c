#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <locale.h> // biblioteca para acentuação
 
int hello();

int main() {
	setlocale(LC_ALL,"");
	int res;
	res = hello();
 	
 	printf("RES: %d:",res);
 	
	system("pause");
 	return 0;
}

int hello(){
	int res;
	res = 4 * 10;
	return res;
}
