#include <stdio.h>

int main() {
    int x = 2018, N;
    int cont = 0;

    for (int i = 0; i != x; i++) {
        scanf("%d", &N);

        if (N != x) {
            cont++;
        } else {
            break;
        }
    }

    printf("%d", cont);

    return 0;
}
