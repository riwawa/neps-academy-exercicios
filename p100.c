#include <stdio.h>

// Função para calcular o comprimento do ciclo de n
int cycle_length(int n) {
    int count = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        count++;
    }
    return count;
}

int main() {
    int i, j;

    // Enquanto houver entrada
    while (scanf("%d %d", &i, &j) == 2) {
        int start = i;
        int end = j;

        // Garante que start seja sempre o menor
        if (i > j) {
            int temp = i;
            i = j;
            j = temp;
        }

        int max_cycle = 0;
        for (int n = i; n <= j; n++) {
            int len = cycle_length(n);
            if (len > max_cycle) {
                max_cycle = len;
            }
        }

        printf("%d %d %d\n", start, end, max_cycle);
    }

    return 0;
}
