#include <stdio.h>

// Programa de Movimentação de Peças de Xadrez (Torre, Bispo, Rainha e Cavalo)
// 
// Peças e seus movimentos:
// - Torre: Move 5 casas para a direita (estrutura for)
// - Bispo: Move 5 casas na diagonal para cima e à direita (estrutura while)
// - Rainha: Move 8 casas para a esquerda (estrutura do-while)
// - Cavalo: Move em "L": 2 casas para baixo e 1 casa para a esquerda (loops aninhados: for e while)
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

    // ------------------------------
    // Movimento do Cavalo (loops aninhados: for e while)
    // O Cavalo move 2 casas para baixo e 1 casa para a esquerda.
    // Utilizou-se um loop for para as movimentações verticais (para baixo) e,
    // dentro do último movimento vertical, um loop while para a movimentação horizontal.
    // ------------------------------
    printf("\nMovimento do Cavalo:\n");
    // Constantes definindo os passos do Cavalo
    const int passosCavaloVert = 2;    // Número de casas para mover para baixo
    const int passosCavaloHoriz = 1;    // Número de casas para mover para a esquerda

    int passoCavaloTotal = 1; // Contador total de passos do Cavalo

    // Loop for para simular os movimentos verticais (para baixo)
    for (int i = 1; i <= passosCavaloVert; i++) {
        // Imprime a direção "Baixo" para cada movimento vertical
        printf("Passo %d: Baixo\n", passoCavaloTotal);
        passoCavaloTotal++;  // Incrementa o contador total
        // Após o último movimento vertical, executa o movimento horizontal aninhado
        if (i == passosCavaloVert) {
            int j = 1; // Inicializa o contador para o movimento horizontal
            // Loop while para simular o movimento horizontal (para a esquerda)
            while (j <= passosCavaloHoriz) {
                printf("Passo %d: Esquerda\n", passoCavaloTotal);
                passoCavaloTotal++;  // Incrementa o contador total
                j++; // Incrementa o contador do loop horizontal
            }
        }
    }

    return 0;
}
