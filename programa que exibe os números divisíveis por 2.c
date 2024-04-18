#include <stdio.h>

int main() {
    int inicio = 10; 
    int fim = 50;
    int contador = 0; 

    printf("Numeros divisiveis por 2 no intervalo de 10 a 50:\n");

    // Itera sobre o intervalo de 10 a 50
    for (int i = inicio; i <= fim; i++) {
        
        if (i % 2 == 0) {
            printf("%d\n", i); 
            contador++; 
        }
    }

    printf("Total de numeros exibidos: %d\n", contador);

    return 0;
}
