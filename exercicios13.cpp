#include <iostream>

int main(){

    int horas;

    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);

    int segundos = horas * 3600;

    printf("O valor em segundos é: %d\n", segundos);

    return 0;
}