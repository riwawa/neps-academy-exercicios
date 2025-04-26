#include <stdio.h>
#include <stdlib.h>

int main() {
    int M, A, B, C;
    scanf("%d\n%d\n%d", &M, &A, &B);


    if (A < B) {
        int temp = A;
        A = B;
        B = temp;
    }
    C = M - (A + B);

    int maior = A;
    if (B > maior) {
        maior = B;
    } else if (C > maior) {
        maior = C;
    }

    printf("%d", maior);


    return 0;
}