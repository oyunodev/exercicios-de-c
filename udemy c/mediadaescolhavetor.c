void main(){ 
    printf("***************************\n");
    printf("| Media das notas do vetor |\n");
    printf("***************************\n");
    printf("\n");
    int tamanhoArray;
    printf("Digite o tamanho do array/vetor: \n");
    scanf("%d", &tamanhoArray);
    float notas[tamanhoArray], media, aux;
    for (int i = 0; i < tamanhoArray; i++){
        printf("Digite a %da nota: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < tamanhoArray; i++){
        aux += notas[i];
    }
    media = aux / tamanhoArray;
    printf("A media eh: %.1f", media);
}