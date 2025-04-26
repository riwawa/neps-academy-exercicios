#include <stdio.h>
#include <stdlib.h>

int main() {
    int N[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &N[i][j]);
        }
    }

    for (int j = 0; j < 3; j++) {
        int soma = 0;

        for (int i = 0; i < 3; i++) {
            soma += N[i][j];
        }

        printf("Coluna %d: %d\n", j, soma);
    }





    return 0;
}