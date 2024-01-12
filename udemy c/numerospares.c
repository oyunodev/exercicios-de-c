void main(){
    int cont = 10;

    while (cont <= 20)
    {
        if (cont % 2 == 0)
        {
            printf("%d ", cont);
        }
        cont++;
    }

    cont = 10;
    printf("\n");

    do{
        if (cont % 2 == 0){
            printf("%d ", cont);
        }
        cont++;
    } while (cont <= 20);

    printf("\n");

    for (cont = 10; cont <= 20; cont++){
        if (cont % 2 == 0){
            printf("%d ", cont);
        }
    }
}