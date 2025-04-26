#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, acertos = 0;
    scanf("%d", &N);
    char G[N+1], c[N+1];

    scanf("%s", G);
    scanf("%s", c);
    for (int i = 0; i < N; i++) {
        if (G[i] == c[i]) {
            acertos++;
        }
        

    }

    printf("%d\n", acertos);
    return 0;
}