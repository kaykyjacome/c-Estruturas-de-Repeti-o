#include <stdio.h>

int main() {
    int contador = 500; 

    printf("Os 500 primeiros numeros inteiros positivos em ordem decrescente sao:\n");

    // Loop enquanto o contador for maior que 0
    while (contador > 0) {
        printf("%d\n", contador); 
        contador--; 
    }

    return 0; 
}
