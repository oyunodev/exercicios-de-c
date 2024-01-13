#include <stdio.h>

int main(void)
{
    FILE *file = fopen("lista.txt", "a");
    char *nome;
    char *numero;
    printf("Nome: ");
    scanf("%s", &nome);
    printf("Numero: ");
    scanf("%s", &numero);
    fprintf(file, "%s - %s\n", &nome, &numero);
}