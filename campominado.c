#include <stdio.h>

int campo[55];

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &campo[i]);
    }

    for (int i = 0; i < n; i++) {
        int x = 0;

        if (i - 1 >= 0) x += campo[i - 1]; // vizinho da esquerda
        x += campo[i];                     // ele mesmo
        if (i + 1 < n) x += campo[i + 1];  // vizinho da direita

        printf("%d\n", x);
    }

    return 0;
}
