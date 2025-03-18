#include <stdio.h>
//
//
// Programa de Movimentação de Peças de Xadrez (Torre, Bispo, Rainha e Cavalo)
// 
// Peças e seus movimentos:
// - Torre: Move 5 casas para a direita
// - Bispo: Move 5 casas na diagonal para cima e à direita
// - Rainha: Move 8 casas para a esquerda
// - Cavalo: Move em "L": 2 casas para cima e 1 casa para a direita
// 
// O programa imprime a direção do movimento para cada casa percorrida.
//
//
// Função recursiva para movimentar a Torre
// Simula o movimento para a direita, imprimindo a direção a cada casa
void moverTorreRec(int passo, int total) {
    if (passo > total) return;  // Caso base: se os passos concluídos excederem o total, encerra a recursão
    printf("Passo %d: Direita\n", passo);
    moverTorreRec(passo + 1, total);  // Chamada recursiva para o próximo passo
}

// Função recursiva para movimentar a Rainha
// Simula o movimento para a esquerda, imprimindo a direção a cada casa
void moverRainhaRec(int passo, int total) {
    if (passo > total) return;
    printf("Passo %d: Esquerda\n", passo);
    moverRainhaRec(passo + 1, total);
}

// Função recursiva para movimentar o Bispo com loops aninhados
// A recursão controla o número de movimentos; para cada chamada, utiliza loops aninhados:
// o loop externo simula o movimento vertical e o interno simula o movimento horizontal,
// imprime-se "Cima, Direita" para cada casa deslocada.
void moverBispoRec(int passo, int total) {
    if (passo > total) return;
    // Loop externo: representa o movimento vertical
    for (int v = 0; v < 1; v++) {
        // Loop interno: representa o movimento horizontal
        for (int h = 0; h < 1; h++) {
            printf("Passo %d: Cima, Direita\n", passo);
        }
    }
    moverBispoRec(passo + 1, total);  // Chamada recursiva para o próximo passo
}

// Função para movimentar o Cavalo utilizando loops aninhados com múltiplas variáveis e condições
// O movimento agora é para cima e para a direita, em "L": duas casas para cima e uma para a direita.
void moverCavalo() {
    int passoCavalo = 1;  // Contador total de passos do Cavalo

    // Loop externo: simula os movimentos verticais (2 casas para cima)
    for (int i = 1; i <= 2; i++) {
        // Imprime a direção "Cima" para cada movimento vertical
        printf("Passo %d: Cima\n", passoCavalo++);
        
        // Após o último movimento vertical, inicia o movimento horizontal
        if (i == 2) {
            // Loop interno: simula o movimento horizontal (1 casa para a direita)
            int j = 1;
            while (j <= 1) {
                // Exemplo de condição utilizando 'continue'
                if (j < 0) {  
                    j++;
                    continue;
                }
                printf("Passo %d: Direita\n", passoCavalo++);
                j++;
                // Uso de 'break' para controlar o fluxo 
                if (j > 1) break;
            }
        }
    }
}

int main() {
    // Declaração de constantes para o número de casas a serem movidas por cada peça
    const int casasTorre = 5;   // Torre: 5 casas para a direita
    const int casasBispo = 5;   // Bispo: 5 casas na diagonal (cima e direita)
    const int casasRainha = 8;  // Rainha: 8 casas para a esquerda

    // ------------------------------
    // Movimento da Torre
    // ------------------------------
    printf("\nMovimento da Torre:\n");
    moverTorreRec(1, casasTorre);

    // ------------------------------
    // Movimento do Bispo 
    // ------------------------------
    printf("\nMovimento do Bispo:\n");
    moverBispoRec(1, casasBispo);

    // ------------------------------
    // Movimento da Rainha
    // ------------------------------
    printf("\nMovimento da Rainha:\n");
    moverRainhaRec(1, casasRainha);

    // ------------------------------
    // Movimento do Cavalo
    // ------------------------------
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
