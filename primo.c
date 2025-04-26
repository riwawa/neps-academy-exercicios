#include <stdio.h>

int eh_primo(int x) {
    if (x <= 1) return 0;
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return 0;
        } 
    }    
    return 1;

}

int main() {
    int x;
    scanf("%d", &x);

    if(eh_primo(x)) {
        printf("S");
    } else {
        printf("N");
    }
    return 0;
}
