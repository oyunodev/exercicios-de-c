void main(){
    //aux é um nome para uma váriavel que é pique um contador
    int num, divsao, aux;
    printf("Escolha um numero: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++){
        divsao = num % i;
        if (divsao == 0){
            aux++;
        }
    }
    if (aux == 2){
        printf("Eh um numero primo!");
    } else{
        printf("Nao eh um numero primo!");
    }

}