#include <stdio.h>

int somaDigitosTR(int x, int parcial){
	if(x<10) return x+parcial;
	return somaDigitosTR(x/10, parcial+x%((x/10)*10) );
}

int somaDigitos (int x){
	return somaDigitosTR(x, 0);
}


int main(){
	int numero;
	scanf("%d", &numero);
	printf("Soma de Digitos: %d", somaDigitos(numero));
}
