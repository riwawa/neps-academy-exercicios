#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, caiu = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int L, C;
        scanf("%d %d", &L, &C);

        if (L > C) {
            caiu += C;
        }
    }

    printf("%d", caiu);
    return 0;
}