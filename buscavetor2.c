#include <stdio.h>
#include <stdlib.h>

int main() {
    int N[10], X, i, indice[10], achou = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &N[i]);
    }

    scanf("%d", &X);

    for (i = 0; i < 10; i++) {
        if (X == N[i]) {
            indice[achou] = i;
            achou += 1;
        }
    }

    if (achou == 0) {
        printf("Mia x\n");
    } else {
        printf("%d\n", achou);
    }
    for (i = 0; i < achou; i++) {
        printf("%d ", indice[i]);
    }
    return 0;
}