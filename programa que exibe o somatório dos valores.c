#include <stdio.h>

int main() {
    int limite = 500; 
    int soma = 0; 

    // Itera sobre todos os números na faixa de 1 até 500
    for (int i = 1; i <= limite; i++) {
       
        if (i % 2 == 0) {
            soma += i; 
        }
    }

    printf("O somatorio dos valores pares de 1 a %d eh: %d\n", limite, soma);

    return 0; 
}
