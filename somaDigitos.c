#include <stdio.h>

int somaDigitos (int x){
	if(x<10) return x;
	return somaDigitos(x/10)+x%((x/10)*10);
}

int main(){
	int numero;
	scanf("%d", &numero);
	printf("Soma de Digitos: %d", somaDigitos(numero));
}
