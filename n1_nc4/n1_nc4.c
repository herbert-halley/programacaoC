#include <stdio.h>

int main(){
    int idade = 25;
    int quantidade = 1;
    float altura = 1.75;
    char opcao = 'S';
    double peso = 90.3;
    char letra = 'A';
    char nome[20] = "sergio";

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade e: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura e: %f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("O nome e: %s\n", nome);


    /*
    printf("A idade do %s e: %d\n", nome, idade);
    printf("A altura e: %.2f\n", altura);
    printf("A opcao e: %c\n", opcao);
    */

}