#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int x, y;

    // Solicita que o usuário forneça os números x e y
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    // Garante que x e y sejam números naturais maiores que zero
    if (x <= 0 || y <= 0) {
        printf("Por favor, insira números naturais maiores que zero.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Troca x e y se necessário para garantir que x seja menor que y
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    printf("Números primos entre %d e %d:\n", x, y);

    // Itera de x até y, verificando e exibindo os números primos
    for (int i = x; i <= y; i++) {
        if (ehPrimo(i)) {
            printf("%d\n", i);
        }
    }

    return 0; // Retorna 0 indicando que o programa foi executado com sucesso
}