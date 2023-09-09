#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    srand(time(NULL));

    int escolhaComputador;
    int escolhaUsuario;
    int jogarNovamente;

    do {

    printf("Bora jogar Pedra-Papel-Tesoura?\n");
    
    while (1) {
        printf("Escolha sua jogada:\n");
        printf("1 - Pedra\n");
        printf("2 - Papel\n");
        printf("3 - Tesoura\n");

        // jogador vai escolher com oq quer jogar
        scanf("%d", &escolhaUsuario);

        if (escolhaUsuario < 1 || escolhaUsuario > 3) {
            printf("Escolha errada. Você precisa escolhar uma das opcoes listadas.\n");
        } else {
            break; // comando para fechar loop de escolha caso escolkha a certa
        }
    }

    // escolha aleatorio da maquina entre 1 e 3
    escolhaComputador = rand() % 3 + 1;

    // Mostrar escolha do jogador e da maquina
    printf("Voce vai jogar com: ");
    switch (escolhaUsuario) {
        case 1:
            printf("Pedra\n");
            break;
        case 2:
            printf("Papel\n");
            break;
        case 3:
            printf("Tesoura\n");
            break;
    }

    printf("O computador escolheu jogar com: ");
    switch (escolhaComputador) {
        case 1:
            printf("Pedra\n");
            break;
        case 2:
            printf("Papel\n");
            break;
        case 3:
            printf("Tesoura\n");
            break;
    }

    if (escolhaUsuario == escolhaComputador) {
        printf("Empate!\n");
    } else if ((escolhaUsuario == 1 && escolhaComputador == 3) ||
               (escolhaUsuario == 2 && escolhaComputador == 1) ||
               (escolhaUsuario == 3 && escolhaComputador == 2)) {
        printf("Voce venceu!!!!!!\n");
    } else {
        printf("Voce foi de arrasta pra cima! O computador ganhou!\n");
    }

      printf("Jogar mais uma? (1 - Sim, 0 - Nao pq sou cagao): ");
        scanf("%d", &jogarNovamente);

    } while (jogarNovamente == 1);

    return 0;
}