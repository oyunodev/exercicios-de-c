#include <stdio.h>

void main(){
    float n1, n2;
    printf("Primeira nota: ");
    // Escaneie o endereço de n1
    scanf("%f", &n1);
    printf("Segunda nota: ");
    // Escaneie o endereço de n2
    scanf("%f", &n2);
    float media = (n1 + n2) / 2;
    printf("A media do aluno foi de %.1f", media);
}