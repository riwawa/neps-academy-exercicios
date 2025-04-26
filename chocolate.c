#include <stdio.h>

int main() {
    int N, pedaco, cont = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &pedaco);

        cont += pedaco - 1;

    }

    printf("%d", cont);

   
    return 0;
}
