void main(){
    // declarando valor do contador
    int contador = 10;
    // enquanto contador for maior que zero, printa o contador e diminui um
    while (contador >= 0)
    {
        printf("%d ", contador);
        contador--;
    }

    // quebrando linhas e resetando o contador
    printf("\n");
    contador = 10;

    // printe o contador e diminua um enquanto for maior que zero
    do
    {
        printf("%d ", contador);
        contador--;
    } while (contador >= 0);

    // quebra again
    printf("\n");

    // para o index igual a dez, enquanto for maior que zero, diminua um e printe o valor do index (mesma coisa que o contador)
    for (int i = 10; i >= 0; i--)
    {
        printf("%d ", i);
    }
    
    
    
}