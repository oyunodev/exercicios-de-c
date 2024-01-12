int main(void)
{
    int innumero;
    
    do
    {
        printf("Quantidade de linhas: ");
        scanf("%i", &innumero);
    } 
    while (innumero < 1 || innumero > 8);
    for (int i = 0; i < innumero; i++)
    {
        for (int j = innumero - 1; j > i; j--)
        {
            printf(" ");
        }
        
        for (int k = -1; k < i; k++)
        { 
            printf("#");
        }
        printf("\n");
    }
    
    
}