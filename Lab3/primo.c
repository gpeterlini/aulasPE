#include <stdio.h>
#include <math.h>

int primoTR(int x, int div){
	if(div==1) return 1;
	if(x%div==0) return 0;
	return primoTR(x, div-1);
}

int primo(int x){
	return primoTR(x,(int) sqrt(x));
}

int main(){
	int x;
	scanf("%d", &x);
	printf("É primo: %d", primo(x));
	printf("\n");
	return 0;
}
