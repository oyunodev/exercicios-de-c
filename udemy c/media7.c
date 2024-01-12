void main(){
    float n1, n2, n3, mediaAluno;
    printf("Digite as tres notas do aluno: \n");
    scanf("%f %f %f", &n1, &n2, &n3);
    mediaAluno = (n1 + n2 + n3) / 3;
    if (mediaAluno >= 7){
        printf("Aluno aprovado com %.1f", mediaAluno);
    } else{
        printf("Aluno reprovado com %.1f", mediaAluno);
    }
}