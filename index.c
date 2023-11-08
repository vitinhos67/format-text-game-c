#include <stdio.h>
#include <string.h>

/*
    Structs. Structs, também conhecidas como Registros, 
    definem tipos de dados que agrupam variáveis sob um mesmo tipo de dado
*/
struct Personagem
{
    char nome[100];
    int idade;
};

int receberIdadeEValidar()
{

    int idade;

    printf("Tudo bem, agora digite sua idade:");
    scanf("%d", &idade);

    return (idade < 18 || idade > 100) ? receberIdadeEValidar() : idade;
}


struct Personagem criarPersonagem()
{
    struct Personagem personagem;
    char nome[100];

    int idade;

    printf("\nVamos criar seu personagem?\nDigite aqui o nome do seu Personagem:");
    scanf("%s", &nome);

    idade = receberIdadeEValidar();

    printf("Ok, %s, sua idade é: %d", nome, idade);

    // Função strcpy copia o valor da 
    // string na segunda posição do argumento para uma variável string na primeira posição
    
    
    strcpy(personagem.nome, nome);
    personagem.idade = idade;


    printf("As espeficicações do seu personagem é:\nnome:%s\nidade:%d",personagem.nome, personagem.idade);

    return personagem;

}

void iniciarJogo()
{
    printf("Iniciando o jogo....\n");

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

    printf("============================================\nVoce deseja iniciar o jogo?\n[1] Iniciar jogo\n[2] Finalizar Jogo\n============================================\n");
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