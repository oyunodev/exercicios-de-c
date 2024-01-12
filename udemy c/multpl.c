#include <stdlib.h>

void main(){
    int n1, n2, n3, multplic;
    printf("Digite tres numeros a serem multiplicados: \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    multplic = n1 * n2 * n3;
    printf("A multiplicacao entre esses numeros eh: %d\n", multplic);
    system("pause");
}