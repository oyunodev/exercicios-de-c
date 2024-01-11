int main(void)
{
    int num1, num2;
    printf("Digite um numero: ");
    scanf("%i", &num1);
    printf("Digite outro numero: ");
    scanf("%i", &num2);
    int soma = num1 + num2;
    printf("A soma entre %i e %i, resulta em %i", num1, num2, soma);
}