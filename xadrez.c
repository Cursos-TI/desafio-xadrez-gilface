#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    /* --- Simulação do Movimento da Torre ---
     A Torre deve se mover 5 casas para a direita.
     Usaremos um loop 'for' para esta simulação.*/
 printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    const int MOVIMENTOS_TORRE = 5;
    for (int i = 1; i <= MOVIMENTOS_TORRE; i++) {
        printf("Casa %d: Direita\n", i);
    }
    printf("\n");

    /* Simulação do Movimento do Bispo ---
     O Bispo deve se mover 5 casas na diagonal (cima e direita).
     Usaremos um loop 'while' para esta simulação.*/
    printf("--- Movimento do Bispo (5 casas na diagonal superior direita) ---\n");
    const int MOVIMENTOS_BISPO = 5;
    int casa_bispo = 1;
    while (casa_bispo <= MOVIMENTOS_BISPO) {
        printf("Casa %d: Cima, Direita\n", casa_bispo);
        casa_bispo++;
    }
    printf("\n"); 


    /* --- Simulação do Movimento da Rainha ---
     A Rainha deve se mover 8 casas para a esquerda.
     Usaremos um loop 'do-while' para esta simulação.*/
    printf("--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    const int MOVIMENTOS_RAINHA = 8;
    int casa_rainha = 1;
    do {
        printf("Casa %d: Esquerda\n", casa_rainha);
        casa_rainha++;
    } while (casa_rainha <= MOVIMENTOS_RAINHA);
    printf("\n");


     /* --- Simulação do Movimento do Cavalo (NOVO DESAFIO) ---
     O Cavalo se move em "L": duas casas em uma direção e uma na perpendicular.
     Simulação: 2 casas para baixo e 1 para a esquerda.
     Requisito: usar loops aninhados (um 'for' e um 'while' ou 'do-while').*/
    printf("--- Movimento do Cavalo (2 casas para baixo, 1 para a esquerda) ---\n");

    // Definimos as etapas do movimento em "L"
    const int PASSOS_RETOS = 2;
    const int PASSOS_PERPENDICULARES = 1;

    // Usamos um loop 'for' externo que executa o movimento completo do "L" uma única vez.
    // Esta abordagem nos permite "aninhar" outros loops dentro dele para cumprir o requisito.
    for (int movimento_l = 0; movimento_l < 1; movimento_l++) {

        // 1. Primeira parte do "L": Mover 2 casas para baixo.
        // Usamos um loop 'while' aninhado para simular os passos retos.
        int passo_reto_atual = 0;
        while (passo_reto_atual < PASSOS_RETOS) {
            printf("Baixo\n");
            passo_reto_atual++;
        }

        // 2. Segunda parte do "L": Mover 1 casa para a esquerda.
        // Como este loop também está dentro do 'for' externo, ele também faz parte da estrutura aninhada.
        // Poderíamos usar um loop aqui, mas como é um passo só, um printf direto é mais claro.
        // Para seguir estritamente a ideia de loops, poderíamos fazer um 'for(int i=0; i < PASSOS_PERPENDICULARES; i++)'.
        printf("Esquerda\n");
    }


    return 0;
}
