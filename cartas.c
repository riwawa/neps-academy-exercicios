#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, C, D;
    scanf("%d\n%d\n%d", &A, &B, &C);

    if (A == B && B != C) {
        D = C;
    } else if (A == C && C != B) {
        D = B;
    } else if (B == C && C != A) {
        D = A;
    } else {
        printf("erro");
    }

    printf("%d", D);

    return 0;
}