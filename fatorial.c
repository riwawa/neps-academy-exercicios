#include <stdio.h>

int fat(int a) {
    if (a == 1 || a == 1) {
        return 1;
    } else {
        return a * fat(a - 1);
    }
}
int main() {
    int N;
    scanf("%d", &N);

    printf("%d", fat(N));
    return 0;
}
