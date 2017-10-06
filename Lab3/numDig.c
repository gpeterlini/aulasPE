#include <stdio.h>

int digitos (int x){
	if(x<10) return 1;
	return 1+digitos(x/10);
}

int main(){
	int numero;
	scanf("%d", &numero);
	printf("Numero de Digitos: %d", digitos(numero));
}
