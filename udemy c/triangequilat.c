void main(){
    int l1, l2, l3;
    printf("Digite os 3 lados de um triangulo: \n");
    scanf("%d %d %d", &l1, &l2, &l3);
    if (l1 == l2 && l2 == l3){
        printf("Eh um triangulo equilatero!");
    } else{
        printf("Nao eh um triangulo equilatero!");
    }
}