void troco(float n)
{
    int quantiamoedas = 0;
    do
    {
        if (n >= 0.25)
        {
            n = n - 0.25;
            quantiamoedas++;
        }
        else if (n < 0.25 && n >= 0.10)
        {
            n = n - 0.10;
            quantiamoedas++;
        }
        else if (n < 0.10 && n >= 0.05)
        {
            n = n - 0.05;
            quantiamoedas++;
        }
        else
        {
            n = n - 0.01;
            quantiamoedas++;
        }
        
    } while (n > 0);
    
    printf("%i", quantiamoedas);
}

int main(void)
{
    float devendo;
    do
    {
        printf("Valor a pagar: ");
        scanf("%f", &devendo);
    } while (devendo < 0);
    troco(devendo);
}