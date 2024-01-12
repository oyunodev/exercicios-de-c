int main(void)
{
    char agree;
    printf("Voce aceita os termos? [y/n] ");
    scanf("%c", &agree);
    if (agree == 'y' || agree == 'Y')
    {
        printf("Voce aceitou os termos!");
    }
    else if (agree == 'n' || agree == 'N')
    {
        printf("Voce rejeitou os termos!");
    }
    
    
}