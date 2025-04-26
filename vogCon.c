#include <stdio.h>
#include <string.h>

int main() {
    char St[51];
    scanf("%s", St);

    char vogais[51];
    char consoantes[51];
    int v = 0, c = 0;

    memset(vogais, 0, sizeof(vogais));
    memset(consoantes, 0, sizeof(consoantes));
    int tamanho = strlen(St);

    for (int i = 0; i < tamanho; i++) {

        char ch = St[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ) {
            vogais[v++] = ch; 
        } else {
            consoantes[c++] = ch;
        }
    }
    printf("Vogais: %s\nConsoantes: %s\n", vogais, consoantes);
    return 0;
}
