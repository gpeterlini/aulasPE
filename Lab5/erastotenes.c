#include<stdio.h>
#include<stdlib.h>

int main(){
    char *primo;
    int n = 20;
    primo = malloc((sizeof(char))*n);
    
    for(int i=0; i<n; i++){
        primo[i] = 1;
    }
    
    for(int j=3; j<n; j++){
        int k=j;
        while(k<n){S
        primo[k] = 0;
        }        
    }
    
    for(int t=1;t<n;t++){
        soma = soma+primo[t];
    }
    printf("%d\n", soma);

    free(primo);    
    return 0;
}
