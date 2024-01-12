void main(){
    float n1, n2, resposta;
    int resp;
    printf("Digite dois numeros para realizar uma operacao: \n");
    scanf("%f %f", &n1, &n2);
    printf("[1] Somar\n[2] Subtrair\n[3] Dividir\n[4] Multiplicar\n");
    scanf("%d", &resp);
    switch (resp){
        case 1:
            resposta = n1 + n2;
            printf("%2.f + %2.f = %2.f", n1, n2, resposta);
            break;
        case 2:
            resposta = n1 - n2;
            printf("%2.f - %2.f = %2.f", n1, n2, resposta);
            break;
        case 3:
            resposta = n1 / n2;
            printf("%2.f / %2.f = %2.f", n1, n2, resposta);
            break;
        case 4:
            resposta = n1 * n2;
            printf("%2.f * %2.f = %2.f", n1, n2, resposta);
            break;
        default:
            printf("Operacao invalida!");
            break;
    }
}