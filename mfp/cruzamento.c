#include <stdio.h>
#include <math.h>

int main() {
    int N, H;
    float alturas = 0, resultado, resArren;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &H);
        alturas += H;
    }

    resultado = alturas / N;
    resArren = ceil(resultado);

    return 0;
}