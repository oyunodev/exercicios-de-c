int main(void)
{
    int correct = 10;
    int resp;
    printf("Qual o resultado de 5 + 5? ");
    scanf("%i", &resp);
    if (resp == correct)
    {
        printf("Parabens, voce acertou a conta!");
    }
    else
    {
        printf(":( voce errou a conta.");
    }
}