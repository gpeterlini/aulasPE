#include <stdio.h>

unsigned int somatorio(unsigned int n){
	if(n==0) return 0;
	return n+somatorio(n-1);
}

int main(){
	int soma;
	scanf("%d", &soma);
	printf("Somatorio: %d", somatorio(soma));
	return 0;
}
