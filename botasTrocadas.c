#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, j, pares = 0;
    scanf("%d", &N);

    int M[30]; // numero da bota/ tamanho
    char L[30]; // o pe da boca

    for (i = 0; i < N; i++) {
        scanf("%d %c", &M[i], &L[i]);
    }

    int usado[30] = {0};

    for (i = 0; i < N; i++) {
        if (usado[i]) continue;

        for (j = i + 1; j < N; j++) {
            if (!usado[j] && M[i] == M[j] && L[i] != L[j]) {
                pares++;
                usado[i] = 1;
                usado[j] = 1;
                break;
            }
        }
    }

    printf("%d\n", pares);
       

    return 0;
}