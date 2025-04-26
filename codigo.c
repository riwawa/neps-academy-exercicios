#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, cem = 0;
    scanf("%d", &N);
    int seq[N];



    for (int i = 0; i < N; i++) {
        scanf("%d", &seq[i]);
    }

    for (int i = 0; i < N - 2; i++) {
        if (seq[i] == 1 && seq[i+1] == 0 && seq[i+2] == 0) {
            cem++;
        }
    }

    printf("%d", cem);
    return 0;
}