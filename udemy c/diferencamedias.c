#include <stdio.h>
#include <stdlib.h>

void main(){
    float n1, n2;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    int diferenca = abs(n1 - n2);
    printf("A diferenca absoluta entre %.1f e %.1f eh: %d", n1, n2, diferenca);
}