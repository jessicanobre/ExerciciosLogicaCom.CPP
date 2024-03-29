#include <iostream>

int main(){

    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("%d\n", (num % 3 == 0 && num % 5 == 0 ) );

    return 0;
}