#include <iostream>

int main(){

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("%d\n",(numero > 0) && (numero % 2 == 0));

    return 0;
}