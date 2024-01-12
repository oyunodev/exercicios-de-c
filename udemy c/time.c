#include <time.h>

void main(){
    srand((unsigned)time(NULL));
    // numero aleatorio de 0 a 2
    int random1 = rand() % 3;
    // numero aleatorio de 1 a 5
    int random2 = (rand() % 5) + 1;
    // teste para gerar até 10
    int random3 = ((rand() % 5) + 1 + random2);
    printf("Primeiro sorteado: %d\nSegundo sorteado: %d\nTerceiro sorteado: %d", random1, random2, random3);
}