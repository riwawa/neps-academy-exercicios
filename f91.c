#include <stdio.h>

int f91(int a) {
    if (a >= 101) {
        return a - 10;
    } else {
        return f91(f91(a + 11));
    }


}

int main() {
    int N = 1;
    while (N != 0) {
        scanf("%d", &N);
        printf("f91(%d) = %d\n", N, f91(N));
    }

    return 0;
}
