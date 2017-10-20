#include<stdio.h>
#include<stdlib.h>

int main(){
    char *primo;
    int n = 20;
    primo = malloc((sizeof(char))*n);
    
    primo[1] = 1;
    primo[2] = 1;
    
    for(int i=3; i<n; i++){
        primo[i] = 1;
        for(int j=2; j<=i/2; j++){
            if(i%j == 0){
                primo[i] = 0;
                break;
            }
        }
    }
    
    int soma = 0;
    for(int k=1;k<n;k++){
        soma = soma+primo[k];
        printf("%d\n", soma);
    }
    
    printf("%d\n", soma);
    
    free(primo);    
    return 0;
}
