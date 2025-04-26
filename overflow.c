#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int N, P, Q;
    char C;
    scanf("%d", &N); // maior numero 
    scanf("%d %c %d", &P, &C, &Q);

    // + e *
    if (C == '+') {
        int y = P + Q;

        if (y > N) {
            printf("OVERFLOW");
        } else if (y <= N) {
            printf("OK");
        }
    } else if (C == '*') {
        int y = P * Q;

        if (y > N) {
            printf("OVERFLOW");
        } else if (y < N) {
            printf("OK");
        }
    }
    
    return 0;
}