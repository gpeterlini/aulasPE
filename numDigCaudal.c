#include <stdio.h>


int digitosTR(int x, int parcial){
	if(x<10) return parcial;
	return digitosTR(x/10, parcial+1);
}

int digitos (int x){
	return digitosTR(x, 1);
}

int main(){
	int numero;
	scanf("%d", &numero);
	printf("Numero de Digitos: %d", digitos(numero));
}
