#include <stdio.h>

// Programa de Movimentação de Peças de Xadrez (Torre, Bispo e Rainha)
// 
// Peças e seus movimentos:
// - Torre: Move 5 casas para a direita (loop for)
// - Bispo: Move 5 casas na diagonal para cima e à direita (loop while)
// - Rainha: Move 8 casas para a esquerda (loop do-while)
// 
// Os valores para o número de casas são definidos por constantes.
// O programa imprime a direção do movimento para cada casa percorrida.

int main() {
    // Declaração de constantes para o número de casas a serem movidas por cada peça
    const int casasTorre = 5;   // Torre: 5 casas para a direita
    const int casasBispo = 5;   // Bispo: 5 casas na diagonal (cima e direita)
    const int casasRainha = 8;  // Rainha: 8 casas para a esquerda

    // ------------------------------
    // Movimento da Torre (estrutura for)
    // ------------------------------
    printf("\nMovimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        // A cada iteração, a Torre move uma casa para a direita
        printf("Passo %d: Direita\n", i);
    }

    // ------------------------------
    // Movimento do Bispo (estrutura while)
    // ------------------------------
    printf("\nMovimento do Bispo:\n");
    int passoBispo = 1;  // Inicializa o contador de passos do Bispo
    while (passoBispo <= casasBispo) {
        // A cada iteração, o Bispo move uma casa na diagonal (Cima, Direita)
        printf("Passo %d: Cima, Direita\n", passoBispo);
        passoBispo++;  // Incrementa o contador
    }

    // ------------------------------
    // Movimento da Rainha (estrutura do-while)
    // ------------------------------
    printf("\nMovimento da Rainha:\n");
    int passoRainha = 1;  // Inicializa o contador de passos da Rainha
    do {
        // A cada iteração, a Rainha move uma casa para a esquerda
        printf("Passo %d: Esquerda\n", passoRainha);
        passoRainha++;  // Incrementa o contador
    } while (passoRainha <= casasRainha);

    return 0;
}
