#include <stdio.h>
#include <string.h>

int main() {
    char dna[1000001]; 
    scanf("%s", dna);

    int maior = 1; // maior numero ate agr
    int atual = 1; // numero atual
    int len = strlen(dna); // tamanho do string

    for (int i = 1; i < len; i++) { // enqnt n terminar o tamanho inteiro do string ele vai continuar
        if (dna[i] == dna[i - 1]) { //olha a letra atual e compara com a anterior
            atual++; // se for igual, ele adiciona pro int numero atual, fica 2
            if (atual > maior) { // mas se atual for maior que o numero q era maior, ent ele vira o maior
                maior = atual;
            }
        } else {
            atual = 1; // caso nao aconteca, volta ao 1
        }
    }

    printf("%d\n", maior);
    return 0;
}
