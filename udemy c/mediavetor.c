void main(){
    float notas[3], media;
    printf("**************************\n");
    printf("| Media entre tres notas |\n");
    printf("**************************\n");
    printf("\n");
    printf("Digite as notas: \n");
    scanf("%f %f %f", &notas[0], &notas[1], &notas[2]);
    media = (notas[0] + notas[1] + notas[2]) / 3;
    printf("A media final das notas: %.1f, %.1f e %.1f resulta em %.1f", notas[0], notas[1], notas[2], media);
}