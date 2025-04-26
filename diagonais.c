#include <stdio.h>
#include <stdlib.h>

int main() {
    int X[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &X[i][j]);
        }
    }

    int somaA = 0;
    int somaB = 0;

    for (int i = 0; i < 3; i++) {
        somaA += X[i][i];
        somaB += X[i][2-i];
    }
    
    printf("Diagonal principal: %d\n", somaA);
    printf("Diagonal secundaria: %d\n", somaB);
    return 0;
}