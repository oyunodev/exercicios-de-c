void main(){
    int matriz[2][2], aux, aux2;
    for (int i = 0; i < 2; i++)
    {   
        for (int ii = 0; ii < 2; ii++){
            printf("Escolha os numeros da matriz: ");
            scanf("%d", &matriz[i][ii]);
        }
    }

    aux = matriz[0][0];
    aux2 = matriz[0][1];
    matriz[0][0] = matriz[1][0];
    matriz[0][1] = matriz[1][1];
    matriz[1][0] = aux;
    matriz[1][1] = aux2;

    for (int i = 0; i < 2; i++)
    {   
        for (int ii = 0; ii < 2; ii++){
            printf("[%d] ", matriz[i][ii]);
        }
        printf("\n");
    }
}