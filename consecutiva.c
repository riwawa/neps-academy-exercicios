#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int v[N];

    // Leitura dos elementos do vetor
    for (int i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    int max_seq = 1;
    int current_seq = 1;

    // Verifica a maior sequência de elementos iguais consecutivos
    for (int i = 1; i < N; i++) {
        if (v[i] == v[i - 1]) {
            current_seq++;
            if (current_seq > max_seq) {
                max_seq = current_seq;
            }
        } else {
            current_seq = 1;
        }
    }

    printf("%d\n", max_seq);

    return 0;
}
