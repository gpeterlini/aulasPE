#include <stdio.h>

unsigned int somatorioTR(unsigned int n, unsigned int parcial){
	if(n==0) return parcial;
	return somatorioTR(n-1, parcial+n);
}


unsigned int somatorio(unsigned int n){
	return somatorioTR(n,0);
}

int main(){
	int soma;
	scanf("%d", &soma);
	printf("Somatorio: %d", somatorio(soma));
	return 0;
}
