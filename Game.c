#include <stdio.h>
#include <string.h>
#include <stdlib.h>



// Incluindo outros arquivos relacionado ao personagem.
#include "./personagens/Personagem.struct.c"
#include "./personagens/Personagem.c"



void iniciarJogo()
{
    printf("\nIniciando o jogo....\n");
    criarPersonagem();
}

int finalizarGame()
{
    printf("\nO jogo foi encerrado\n");
    return 1;
}

void inicializarJogo()
{

    char gameStartOption;

    printf("\nVoce deseja iniciar o jogo?\n[1] Iniciar jogo\n[2] Finalizar Jogo\n");
    scanf("%c", &gameStartOption);

    switch (gameStartOption)
    {
    case '1':
        iniciarJogo();
        break;
    case '2':
        finalizarGame();
        break;

    default:
        inicializarJogo();
        break;
    }
}

int main()
{
    inicializarJogo();
    return 1;
}