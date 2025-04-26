#include <stdio.h>
#include <stdlib.h>

int main() {
    int N[10], X, achou = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &N[i]);
    }

    scanf("%d", &X);

    for (int i = 0; i < 10; i++) {
        if (X == N[i]) {
            achou = 1;
            break;
        }
    }

    if (achou) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }
    return 0;
}