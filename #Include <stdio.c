#include <stdio.h>

int main() {

    int numero1, numero2, soma;

    //Lendo os números do usuário
    printf("Digite o primeiro número:  \n");
    scanf("%d", &numero1);

    printf("Digite o segundo número: \n");
    scanf("%d", &numero2);

    //Realiza a soma de dois números
    soma = numero1 + numero2;

    //Exibe o resultado da soma
    printf("A soma de %d e %d é: %d\n", numero1, numero2, soma);

    return 0;

}