#include <stdio.h>

int main() {
    int N;

    int maior_num, atual_num;
    for (int i = 1; i != 0; i++) {
        scanf("%d", &N);

        atual_num = N;

        if(atual_num > maior_num) {
            maior_num = atual_num;
        }
        if (N == 0) {
            break;
        }
    }

    printf("%d", maior_num);
    return 0;
}
