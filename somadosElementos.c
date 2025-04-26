#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, soma = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int valor;
        scanf("%d", &valor);
        soma += valor;
    }

    printf("%d\n", soma);
    return 0;
}