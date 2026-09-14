#include <stdio.h>
#include <string.h>

int main() {

    int numero, soma;
    soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (numero != 0){
        soma = soma + numero;
        printf("Digite um numero: ");
        scanf("%d", &numero);
    }

    printf("A soma dos numeros digitados e: %d\n", soma);
    
    return 0;
}
