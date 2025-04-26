#include <stdio.h>
#include <stdlib.h>

int main() {
    int L, C;
    scanf("%d", &L);
    scanf("%d", &C);

    int x = L + C;

    if (x % 2 == 0) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}